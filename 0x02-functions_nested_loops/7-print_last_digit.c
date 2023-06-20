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
	if (n < 0)
		n = -n;
	return (n % 10);
}
