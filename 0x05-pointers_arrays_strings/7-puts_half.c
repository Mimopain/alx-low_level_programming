#include "main.h"
#include <string.h>

/**
 * puts_half - Prints half of a string, followed by a new line.
 * @str: The string from which to print the second half.
 *
 * Return: None.
 */

void puts_half(char *str)
{
	int length = strlen(str);
	int start, i;

	if (length % 2 == 0)
		start = length / 2;
	else
		start = (length + 1) / 2;
	for (i = start; i < length; i++)
		_putchar(str[i]);

	_putchar('\n');
}
