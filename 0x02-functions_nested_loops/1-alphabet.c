#include "main.h"

/**
 * print_alphabet - Entry to the program
 *
 * Description: A program that prints all the letter of the alphabet using
 * only _putchar twice
 *
 * Return: return 0 for success
 */

void print_alphabet(void)
{
	int t;

		for (t = 'a'; t <= 'z'; t++)
	{
		_putchar(t);
	}
	_putchar('\n');
}
