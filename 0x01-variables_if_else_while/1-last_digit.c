#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - Entry poin of the program
 *
 * Description: This program generates a random number and prints the
 * the last digit of the number along with a corresponding
 * message
 *
 * Return: 0 on successful execution
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	printf("Last digit of %d is ", n);

	n = n % 10;

	if (n > 5)
	{
		printf("%d and is greater than 5\n", n);
	}
	else if (n == 0)
	{
		printf("%d and is 0\n", n);
	}
	else
	{
		printf("%d and is less than 6 and not 0\n", n);
	}
	return (0);
}
