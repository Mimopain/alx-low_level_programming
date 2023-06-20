#include <stdio.h>
#include "main.h"

/**
 * main - Entry point of the program
 *
 * Description: Finds and prints the sum of the even-valued terms
 * in the Fibonacci sequence up to 4,000,000.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	long fib1 = 1, fib2 = 2, next, sum = 0;

	while (fib1 <= 4000000)
	{
		if (fib1 % 2 == 0)
			sum += fib1;
		next = fib1 + fib2;
		fib1 = fib2;
		fib2 = next;
	}
	printf("%ld\n", sum);
	return (0);
}
