#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int _putchar(char c);

/**
 * _isdigit - Checks if a character is a digit
 * @c: The character to check
 * Return: 1 if c is a digit, 0 otherwise
 */

int _isdigit(char c)
{
	return (c >= '0' && c <= '9');
}

/**
 * multiply - Multiplies two positive numbers
 * @num1: The first number
 * @num2: The second number
 *
 * Return: The result of the multiplication
 */

void multiply(char *num1, char *num2)
{
	int len1 = 0, len2 = 0, i, j, k;
	int *result;

	while (num1[len1])
		len1++;

	while (num2[len2])
		len2++;

	result = calloc(len1 + len2, sizeof(int));

	if (result == NULL)
	{
		printf("Error\n");
		exit(98);
	}

	for (i = len1 - 1; i >= 0; i--)
	{
		for (j = len2 - 1; j >= 0; j--)
		{
			k = i + j + 1;
			result[k] += (num1[i] - '0') * (num2[j] - '0');

			while (result[k] >= 10)
			{
				result[k - 1] += result[k] / 10;
				result[k] %= 10;
				k--;
			}
		}
	}

	i = 0;
	while (i < len1 + len2 && result[i] == 0)
		i++;

	if (i == len1 + len2)
		_putchar('0');
	else
	{
		for (; i < len1 + len2; i++)
			_putchar(result[i] + '0');
	}
	_putchar('\n');

	free(result);
}

/**
 * main - Entry point
 * @argc: The number of command line arguments
 * @argv: An array containing the command line arguments
 *
 * Return: 0 on success, 1 on error
 */

int main(int argc, char *argv[])
{
	int i, j;

	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (!_isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (98);
			}
		}
	}
	multiply(argv[1], argv[2]);

	return (0);
}
