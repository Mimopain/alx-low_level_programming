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
	int tensDigit1, unitsDigit1;

	for (tensDigit1 = 0; tensDigit1 < 10; tensDigit1++)

	{

		for (unitsDigit1 = 0; unitsDigit1 < 10; unitsDigit1++)

		{
			int tensDigit2, unitsDigit2;

			for (tensDigit2 = tensDigit1; tensDigit2 < 10; tensDigit2++)

			{
				int startUnitsDigit = (tensDigit1 == tensDigit2) ? unitsDigit1 + 1 : 0;

				for (unitsDigit2 = startUnitsDigit; unitsDigit2 < 10; unitsDigit2++)

				{
					putchar(tensDigit1 + '0');
					putchar(unitsDigit1 + '0');
					putchar(' ');
					putchar(tensDigit2 + '0');
					putchar(unitsDigit2 + '0');

					if (!(tensDigit1 == 9 && unitsDigit1 == 9 && tensDigit2 == 9 && unitsDigit2 == 9))

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
