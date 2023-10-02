#include "main.h"
#include <stddef.h>

/**
 * _strstr - Locates a substring.
 * @haystack: Pointer to the string to be searched.
 * @needle: Pointer to the substring to search for.
 * Return: A pointer to the beginning of the located substring in @haystack,
 * or NULL if the substring is not found.
 */

char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *start = haystack;
		char *substr = needle;

		while (*haystack != '\0' && *substr != '\0' && *haystack == *substr)
		{
			haystack++;
			substr++;
		}

		if (*substr == '\0')
		{
			return (start);
		}

		haystack = start + 1;
	}

	return (NULL);
}
