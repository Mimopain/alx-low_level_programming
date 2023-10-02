#include "main.h"

/**
 * _isalpha - Entry point of the program
 *
 * Description: this program checks for letters, uppercase or lowercase
 * @c: a character argument
 * Return: returns 1 for success and 0 otherwise
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
