#include "main.h"

/**
 * _islower - entry to the program
 *
 * Description: a progranm that checks for lowercase characters
 *
 * @c: a character argument
 * Return: returns 1 or 0 depending on condition
 */

int _islower(int c)
{
	return (c >= 'a' && c <= 'z');
}
