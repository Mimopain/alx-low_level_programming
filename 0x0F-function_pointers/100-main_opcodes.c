#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the opcodes of its own main function.
 * @argc: Number of command-line argument.
 * @argv: Array of command-line arguments.
 *
 * Return: 0 on success, otherwise 1 or 2
 */

int main(int argc, char *argv[])
{
	int bytes, i;
	unsigned char *p;

	if (argc != 2)

	{
		printf("Error\n");
		return (1);
	}
	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		return (2);
	}

	p = (unsigned char *)main;

	for (i = 0; i < bytes; i++)

		printf("%02x ", p[i]);

	printf("\n");

	return (0);
}
