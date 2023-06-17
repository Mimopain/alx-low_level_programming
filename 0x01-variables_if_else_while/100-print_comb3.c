#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This program prints all possible different
 * combinations of two digits,
 * following the given requirements.
 *
 * Return: 0 on successful execution
 */

int main(void)
{
	int tens;

	for (tens = 0; tens < 9; tens++)

	{
		int units;

		for (units = tens + 1; units <= 9; units++)

		{
			putchar(tens + '0');

			putchar(units + '0');

			if (tens != 8 || units != 9)

			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	{
		putchar('\n');
	}

	return (0);
}
