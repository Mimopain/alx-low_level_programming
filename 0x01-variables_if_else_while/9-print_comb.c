#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This program prints all possible combinations of
 * single-digit numbers,
 * separated by ", " and in ascending order.
 *
 * Return: 0 on successful execution
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		putchar(n + '0');

		if (n != 9)

		{
		putchar(',');

		putchar(' ');
		}
	}

	{
		putchar('\n');
	}

	return (0);
}
