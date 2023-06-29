#include "main.h"

/**
 * rot13 - Encode a string using ROT13 encryption.
 * @s: The string to encode.
 *
 * Return: The encoded string.
 */

char *rot13(char *s)
{
	char *alphabet = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *rot13 = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	int i, j;

	i = 0;

	while (s[i])
	{
		j = 0;
		while (alphabet[j])
		{
			if (s[i] == alphabet[j])
			{
				s[i] = rot13[j];
				break;
			}
			j++;
		}
		i++;
	}

	return (s);
}
