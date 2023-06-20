#include "main.h"

/**
 * times_table - Entry to the program
 *
 * Description: 9 times table
 *
 * @i, j: declared integers
 * Return: return 0 on success
 */

void times_table(void)
{
	int i, j, product;

	for (i = 0; i <= 9; i++)

	{
		for (j = 0; j <= 9; j++)
		{
			product = i * j;

			if (j != 0)
			{
				_putchar(',');
				_putchar(' ');

				if (product < 10)
					_putchar(' ');
			}
			_putchar('0' + product);
		}
		_putchar('\n');
	}
}

