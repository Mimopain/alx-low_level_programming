#include <stdio.h>

/**
 * main - Entry point of the program
 * Description: This program prints all possible
 * combinations of two two-digit numbers,
 * following the given requirements.
 *
 * Return: 0 on successful execution
 */
int main(void)
{
	int tens1, units1;

	for (tens1 = 0; tens1 < 10; tens1++)
	{
		for (units1 = 0; units1 < 10; units1++)
		{
			int tens2, units2;

			for (tens2 = tens1; tens2 < 10; tens2++)
			{
				int startUnits = (tens1 == tens2) ? units1 + 1 : 0;

				for (units2 = startUnits; units2 < 10; units2++)
				{
					putchar(tens1 + '0');
					putchar(units1 + '0');
					putchar(' ');
					putchar(tens2 + '0');
					putchar(units2 + '0');

					if (!(tens1 == 9 && units1 == 8 && tens2 == 9 && units2 == 9))

					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	{
		putchar('\n');
	}
	return (0);
}
