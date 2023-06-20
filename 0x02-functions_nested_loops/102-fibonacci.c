#include <stdio.h>
#include "main.h"

/**
 * main - entry point
 *
 * Description: Prints the first 50 Fibonacci numbers
 * starting with 1 and 2, separated by commas.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	long long int fib1 = 1, fib2 = 2, next;

	printf("%lld, %lld, ", fib1, fib2);

	for (i = 3; i <= 50; i++)
	{
		next = fib1 + fib2;
		printf("%lld", next);

		if (i < 50)
		printf(", ");

	fib1 = fib2;
	fib2 = next;
	}

	printf("\n");

	return (0);
}
