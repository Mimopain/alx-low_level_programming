#include "main.h"
#include <string.h>

/**
 * print_rev - Prints a string in reverse, followed by a new line.
 * @s: The string to be printed in reverse.
 *
 * Return: None.
 */

void print_rev(char *s)
{
	int i, length;

	length = strlen(s);

	for (i = length - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
