#include "main.h"
#include <string.h>

/**
 * is_palindrome_recursive - Checks if a string is a palindrome recursively.
 * @s: The input string.
 * @start: The starting index of the substring to check.
 * @end: The ending index of the substring to check.
 *
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */

int is_palindrome_recursive(char *s, int start, int end);

/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: The input string.
 *
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */

int is_palindrome(char *s)
{
	int length = strlen(s);

	return (is_palindrome_recursive(s, 0, length - 1));
}
/**
 * is_palindrome_recursive - Checks if a string is a palindrome recursively.
 * @s: The input string.
 * @start: The starting index of the substring to check.
 * @end: The ending index of the substring to check.
 *
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */

int is_palindrome_recursive(char *s, int start, int end)
{
	if (start >= end)
	{
		return (1);
	}
	else if (s[start] != s[end])
	{
		return (0);
	}
	else
	{
		return (is_palindrome_recursive(s, start + 1, end - 1));
	}
}
