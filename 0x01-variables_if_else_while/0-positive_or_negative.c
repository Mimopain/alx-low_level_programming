#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 *main - Entry point of the program
 *
 *Description: This program generates a random number and determines
 *		whether it is positive, negative, or zero.
 *
 * Return: 0 on successful execution
 */
int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("The number is %d\n", n);
	if (n > 0)
	{
		printf("is positive\n");
	}
	else if (n < 0)
	{
		printf("is negative\n");
	}
	else
	{
		printf("is zero\n");
	}
	return (0);
}

