#include <stdio.h>
#include <string.h>

/**
 * infinite_add - Adds two numbers
 * @n1: The first number
 * @n2: The second number
 * @r: The buffer to store the result
 * @size_r: The size of the buffer
 *
 * Return: Pointer to the result (r), or 0 if the result cannot be stored in r
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1 = strlen(n1);
	int len2 = strlen(n2);
	int maxLen = (len1 > len2) ? len1 : len2;
	int minLen = (len1 < len2) ? len1 : len2;
	int carry = 0;
	int sum, i;

	if (maxLen + 1 > size_r)
		return (0);

	r[maxLen] = '\0';

	for (i = 0; i < minLen; i++)
	{
		sum = (n1[len1 - 1 - i] - '0') + (n2[len2 - 1 - i] - '0') + carry;
		carry = sum / 10;
		r[maxLen - 1 - i] = (sum % 10) + '0';
	}

	if (len1 > len2)
	{
		for (; i < maxLen; i++)
		{
			sum = (n1[len1 - 1 - i] - '0') + carry;
			carry = sum / 10;
			r[maxLen - 1 - i] = (sum % 10) + '0';
		}
	}
	else
	{
		for (; i < maxLen; i++)
		{
			sum = (n2[len2 - 1 - i] - '0') + carry;
			carry = sum / 10;
			r[maxLen - 1 - i] = (sum % 10) + '0';
		}
	}

	if (carry != 0)
	{
		if (maxLen + 1 == size_r)
			return (0);
		for (i = maxLen; i >= 0; i--)
			r[i + 1] = r[i];
		r[0] = carry + '0';
	}

	return (r);
}
