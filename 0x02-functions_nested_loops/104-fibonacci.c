#include <stdio.h>
#include "main.h"

/**
 * main - Entry point of the program
 *
 * Description: Finds and prints the first 98 Fibonacci numbers,
 * starting with 1 and 2.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int count, n;
	unsigned long fib1 = 1, fib2 = 2, next;
	
	printf("%lu, %lu", fib1, fib2);  // Print the first two Fibonacci numbers
	for (count = 3; count <= 98; count++)
	{
		next = fib1 + fib2;
        printf(", %lu", next);

	fib1 = fib2;
	fib2 = next;
    }
	printf("\n");

    return (0);
}
