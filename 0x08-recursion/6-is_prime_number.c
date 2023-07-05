#include "main.h"

/**
 * is_prime_number - Checks if a number is a prime number.
 * @n: The number to check.
 *
 * Return: 1 if the number is prime, 0 otherwise.
 *
 * Description: This function checks if a number is prime by iterating from 2
 * up to the square root of the number and checking for any
 * factors other than 1 and itself. If such a factor is found,
 * the number is not prime.
 */

int is_prime_number(int n)
{
	int i;

	if (n <= 1)
		return (0);

	for (i = 2; i * i <= n; i++)
	{
		if (n % i == 0)
			return (0);
	}

	return (1);
}
