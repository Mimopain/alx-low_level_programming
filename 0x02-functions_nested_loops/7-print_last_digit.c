#include "main.h"

/**
 * print_last_digit - Entry to the program
 *
 * Description: a program that prints the last digit of numbers
 *
 * @n: character assignment
 * Return: Return x on success
 */

int print_last_digit(int n)
{
	int x;

	if (n < 0)
		n = -n;
	x = n % 10;

	_putchar('0' + x);


	return (x);
}
