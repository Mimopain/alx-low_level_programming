#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * Description: This program prints the tebahpla in lowercase using
 * the putchar function.
 *
 * Return: 0 on successful execution
 */
int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)

	{
		putchar(letter);
	}
	{
		putchar('\n');
	}
	return (0);
}

