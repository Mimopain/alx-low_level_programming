#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - Prints a name using a provided function pointers
 * @name: Name to be printed.
 * f: Function pointer to print the name.
 *
 * Description: This function calls the provided function pointer `f`
 * to print the name.
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
