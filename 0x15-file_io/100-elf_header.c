#include "main.h"

/**
 * error_exit - Display error message and exit
 * @msg: Error message
 */
void error_exit(const char *msg)
{
    dprintf(STDERR_FILENO, "%s\n", msg);
    exit(98);
}

/**
 * print_info - Print ELF header information
 * @elf: Pointer to ELF header
 */
void print_info(Elf64_Ehdr *elf)
{
    char *ident, *data;

    ident = (char *)elf->e_ident;
    data = ident[5] == ELFDATA2MSB ? "2's complement, big endian" : "2's complement, little endian";

    printf("  Magic:   ");
    for (int i = 0; i < EI_NIDENT; i++)
        printf("%02x ", ident[i]);
    printf("\n");
    printf("  Class:                             %s\n", ident[EI_CLASS] == ELFCLASS32 ? "ELF32" : "ELF64");
    printf("  Data:                              %s\n", data);
    printf("  Version:                           %d (current)\n", ident[EI_VERSION]);
    printf("  OS/ABI:                            %d\n", ident[EI_OSABI]);
    printf("  ABI Version:                       %d\n", ident[EI_ABIVERSION]);
    printf("  Type:                              %d\n", elf->e_type);
    printf("  Entry point address:               0x%x\n", (int)elf->e_entry);
}

/**
 * read_elf_header - Read and display ELF header information
 * @file: File descriptor of the ELF file
 */
void read_elf_header(int file)
{
    Elf64_Ehdr elf;

    if (read(file, &elf, sizeof(elf)) != sizeof(elf))
        error_exit("Error: Could not read ELF header");

    if (elf.e_ident[EI_MAG0] != ELFMAG0 || elf.e_ident[EI_MAG1] != ELFMAG1 ||
        elf.e_ident[EI_MAG2] != ELFMAG2 || elf.e_ident[EI_MAG3] != ELFMAG3)
        error_exit("Error: Not an ELF file");

    printf("ELF Header:\n");
    print_info(&elf);
}

/**
 * main - Entry point
 * @ac: Argument count
 * @av: Argument vector
 * Return: 0 on success
 */
int main(int ac, char *av[])
{
    int fd;

    if (ac != 2)
        error_exit("Usage: elf_header elf_filename");

    fd = open(av[1], O_RDONLY);
    if (fd == -1)
        error_exit("Error: Cannot read ELF file");

    read_elf_header(fd);
    close(fd);
    return (0);
}

