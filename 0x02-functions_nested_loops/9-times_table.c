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
		_putchar('0');


		for (j = 0; j <= 9; j++)
			{
				_putchar(',');
				_putchar(' ');
			product = i * j;

				if (product < 10)
					_putchar(' ');
				else

			_putchar('0' + product / 10);
			_putchar('0' + product % 10);

			}
	}

		_putchar('\n');

}
