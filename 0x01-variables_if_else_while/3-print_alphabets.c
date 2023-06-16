#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * Description: This program prints the alphabets both in lowercase
 * and uppercase using the putchar function
 *
 * Return: 0 for succes
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)

	{
		putchar(letter);
	}

	for (letter = 'A'; letter <= 'Z'; letter++)

	{
		putchar(letter);
	}

	{
		putchar('\n');
	}
	return (0);
}
