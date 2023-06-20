#include "main.h"

/**
 * print_last_digit - Entry to the program
 *
 * Description: a program that prints the last digit of numbers
 *
 * @n: character assignment
 * Return: Return 0 on success
 */

int print_last_digit(int n)
{
	int x;

	if (n < 0)
		n = -n;
	x = n & 10;

	_putchar(x + '0');
	return (n % 10);
}
