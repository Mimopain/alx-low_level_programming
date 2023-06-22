#include "main.h"

/**
 * print_numbers - Entry point
 *
 * Description: a program that prints from 0 to 9
 *
 * Return: return 0 for success
 */

void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)

		_putchar (i + '0');
	_putchar('\n');

}
