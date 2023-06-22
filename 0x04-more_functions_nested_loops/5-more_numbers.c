#include "main.h"


/**
 * more_numbers - entry program
 *
 * Description: a program that prints from 0 to 14
 *
 * Return 0 on success
 */

void more_numbers(void)
{
	int i, j;

	for (i = 0; i <= 14; i++)
	{
		j = i * 10;

		if (j >= 10)
			_putchar('0' + j / 10);
		_putchar('0' + j % 10);
		if (i < 14)
			_putchar(' ');
	}
			_putchar('\n');
}
