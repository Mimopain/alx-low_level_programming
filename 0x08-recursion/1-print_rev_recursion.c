#include "main.h"

/**
 * _print_rev_recursion - Prints a string in reverse.
 * @s: The string to be printed in reverse.
 *
 * Description: This function recursively prints a string in reverse by
 *traversing the string until it reaches the null terminator,
 *and then it backtracks to print each character in reverse order.
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return;

	_print_rev_recursion(s + 1);
	_putchar(*s); /* Assuming you have a custom _putchar function */
}
