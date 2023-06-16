#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * Description: This program prints all single-digit numbers in base 10,
 * starting from 0, followed by a new line.
 *
 * Return: 0 on successful execution
 */

int main(void)
{
	int number;

	for (number = 0; number < 10; number++)
	{
		putchar('0' + number);
	}

	{
		putchar('\n');
	}
	return (0);
}

