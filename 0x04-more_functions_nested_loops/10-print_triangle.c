#include "main.h"

/**
 * print_triangle - Prints a triangle followed by a new line.
 *
 * @size: The size of the triangle.
 * Return: returns 0
 */

void print_triangle(int size)
{
	int i, j, spaces;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	for (i = 0; i < size; i++)
	{
		spaces = size - i - 1;

		for (j = 0; j < spaces; j++)
		{
			_putchar(' ');
		}
		/* Print '#' */
		for (j = 0; j <= i; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
