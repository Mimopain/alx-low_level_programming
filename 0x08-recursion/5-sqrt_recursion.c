#include "main.h"

/**
 * sqrt_helper - Helper function to calculate the square root recursively.
 * @n: The number to calculate the square root of.
 * @i: The current value to check for the square root.
 *
 * Return: The square root of n if it has a natural square root, -1 otherwise.
 */
int sqrt_helper(int n, int i)
{
	if (i * i == n)
		return (i);
	if (i * i > n)
		return (-1);

	return (sqrt_helper(n, i + 1));
}
/**
 * _sqrt_recursion - Calculates the natural square root of a number.
 * @n: The number to calculate the square root of.
 *
 * Return: The square root of n if it has a natural square root, -1 otherwise.
 *
 * Description: This function calculates the natural square root of a number
 * by calling the helper function sqrt_helper with an initial value of 0.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (sqrt_helper(n, 0));
}
