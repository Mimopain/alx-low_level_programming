#include "main.h"

/**
 * fizz_buzz - Prints numbers from 1 to 100 according to FizzBuzz rules.
 *
 * Description: print numbers from 1 to 100 according to FIZZBUZZ
 *
 * Return: Always 0.
 */

int fizz_buzz(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i == 100)
		{
			printf("Buzz");
		}
		else if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", i);
		}
	}
	printf("\n");

	return (0);
}
