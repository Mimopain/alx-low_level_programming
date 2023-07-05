#include "main.h"

/**
 * factorial - Calculates the factorial of a given number.
 * @n: The number to calculate the factorial of.
 *
 * Return: The factorial of n, or -1 if n is less than 0 (indicating an error).
 *
 * Description: This function calculates the factorial of a number by
 * multiplying the number with the factorial of the number
 * one less than it, until it reaches 1.
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
