#include "main.h"

int check_prime(int, int);

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
	return (check_prime(n, 1));
}

/**
 * check_prime - checks prime
 * @n: number
 * @i: iterator
 * Return: 0 or 1
 */

int check_prime(int n, int i)
{
	if (n <= 1)
		return (0);

	if (n % i == 0 && i > 1)
	return (0);

	if ((n / i) < i)
		return (1);
	return (check_prime(n, i + 1));
}
