#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - entry point
 *
 * Description: a program that prints to 98
 *
 * @n: integer declaration
 * Return: return to 0
 */

void print_to_98(int n)
{
	if (n <= 98)
	{
		for (int i = n; i <= 98; i++)
		{
			printf("%d", i);
			if (i != 98)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	else
	{
		for (int i = n; i >= 98; i--)
		{
			printf("%d", i);
			if (i != 98)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
}

