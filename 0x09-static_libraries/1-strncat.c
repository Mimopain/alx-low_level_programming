#include "main.h"

/**
 * _strncat - Concatenates two strings, using at most n bytes from src.
 * @dest: The destination string.
 * @src: The source string.
 * @n: The maximum number of bytes to be used from src.
 *
 * Return: A pointer to the resulting string @dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	/* Find the end of the destination string */
	for (i = 0; dest[i] != '\0'; i++)
	{
	}
	/* Append the source string to the destination string */
	for (j = 0; src[j] != '\0' && j < n; j++, i++)
	{
		dest[i] = src[j];
	}
	/* Add the terminating null byte */
	dest[i] = '\0';

	return (dest);
}
