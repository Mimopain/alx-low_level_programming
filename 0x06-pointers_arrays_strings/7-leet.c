#include "main.h"

/**
 * leet - Encode a string into "1337" text.
 * @s: The string to encode.
 *
 * Return: The encoded string.
 */

char *leet(char *s)
{
	char *leet_replace = "aAeEoOtTlL";
	char *leet_code = "4433007711";
	int i, j;

	i = 0;
	while (s[i])
	{
		j = 0;
		while (leet_replace[j])
		{
			if (s[i] == leet_replace[j])
				s[i] = leet_code[j];
			j++;
		}
		i++;
	}
	return (s);
}
