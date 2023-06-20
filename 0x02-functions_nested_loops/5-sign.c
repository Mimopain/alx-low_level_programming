#include "main.h"

/**
 * print_sign - Entry to the program
 *
 * Description: print a sign for numbers
 *
 * @n: a character assignment
 * Return: return -1, 0 0r 1
 */

int print_sign(int n)

{
	int n

		if (n > 0)
		{
			_putchar('+');
			return (1);
		}
		else if (n == 0)
		{
			_putchar('0');
			return (0);
		}
		else
		{
			_putchar ('-');
			return (-1);
		}

}
