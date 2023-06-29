#include <stdio.h>

/**
 * _strcat - Concatenates two strings.
 * @dest: The destination string.
 * @src: The source string.
 *
 * Return: A pointer to the resulting string @dest.
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	/* Find the end of the destination string */
	for (i = 0; dest[i] != '\0'; i++)
	{
	}
	/* Append the source string to the destination string */
	for (j = 0; src[j] != '\0'; j++, i++)
	{
		dest[i] = src[j];
	}
	/* Add the terminating null byte */
	dest[i] = '\0';

	return (dest);
}
