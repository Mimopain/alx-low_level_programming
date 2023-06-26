#include "main.h"

/**
 * _strlen - Calculates the length of a string.
 *
 * @s: The string to calculate the length of.
 * @l: integer parameter for length.
 *
 * Return: The length of the string.
 */

int _strlen(char *s)
{
	int l = 0;

	while (*s != '\0')
	{
		l++;
		s++;
	}

	return (l);
}
