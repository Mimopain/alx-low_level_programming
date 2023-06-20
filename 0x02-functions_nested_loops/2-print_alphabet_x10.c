#include "main.h"

/**
 * print_alphabet_x10 - Entry to the program
 *
 * Description: Printing the alphabet in lowercase x10
 *
 * Return: return 0 on success
 */

void print_alphabet_x10(void)
{
	int b;
	int d;

	for (b = 0; b < 10; b++)
	{
		for (d = 'a'; d <= 'z'; d++)
		{
			_putchar(d);
		}
		_putchar('\n');
	}
}
