#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * Description: printing all letters except letter 'q' and 'e'
 * using the putchar function
 *
 * Return: 0 on successful execution
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)

	{
		if (letter != 'q' && letter != 'e')

		{
			putchar(letter);
		}

	}

	{
		putchar('\n');
	}
	return (0);
}
