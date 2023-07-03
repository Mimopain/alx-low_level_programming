#include "main.h"
#include <stdio.h>

/**
 * set_string - Sets the value of a pointer to a char.
 * @s: Pointer to the pointer that needs to be modified.
 * @to: Pointer to the char to set the pointer to.
 *
 * Return: Nothing.
 */
void set_string(char **s, char *to)
{
	*s = to;
}
