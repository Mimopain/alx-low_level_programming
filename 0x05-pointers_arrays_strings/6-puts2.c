#include "main.h"
#include <string.h>

/**
 * puts2 - Prints every other character of a string,
 * starting with the first character.
 * @str: The string from which to print every other character.
 *
 * Return: None.
 */

void puts2(char *str)
{
	int i, len;

	len = strlen(str);
	for (i = 0; i < len; i += 2)
		_putchar(str[i]);
	_putchar('\n');
}
