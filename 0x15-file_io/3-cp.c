#include "main.h"

#define BUFSIZE 1024

/**
 * close_file - Closes a file descriptor
 * @fd: File descriptor to close
 * Return: 0 on success, -1 on failure
 */
int close_file(int fd)
{
    if (close(fd) == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
        return (-1);
    }
    return (0);
}

/**
 * main - Copy the content of a file to another file
 * @argc: Argument count
 * @argv: Argument vector
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
    int fd_from, fd_to;
    ssize_t r_bytes, w_bytes;
    char buf[BUFSIZE];

    if (argc != 3)
    {
        dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
        exit(97);
    }

    fd_from = open(argv[1], O_RDONLY);
    if (fd_from == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
        exit(98);
    }

    fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH);
    if (fd_to == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
        close_file(fd_from);
        exit(99);
    }

    while ((r_bytes = read(fd_from, buf, BUFSIZE)) > 0)
    {
        w_bytes = write(fd_to, buf, r_bytes);
        if (w_bytes == -1 || w_bytes != r_bytes)
        {
            dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
            close_file(fd_from);
            close_file(fd_to);
            exit(99);
        }
    }

    if (r_bytes == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
        close_file(fd_from);
        close_file(fd_to);
        exit(98);
    }

    if (close_file(fd_from) == -1 || close_file(fd_to) == -1)
        exit(100);

    return (0);
}

