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

	putchar('0');

	for (n = 1; n < 10; n++)

	{
		putchar(',');

		putchar(' ');

		putchar(n + '0');
	}

	return (0);
}
