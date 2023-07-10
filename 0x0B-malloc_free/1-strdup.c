#include <stdlib.h>
#include <string.h>

/**
 * _strdup - Returns a pointer to a newly allocated space in memory
 * containing a copy of the string.
 * @str: The string to be duplicated.
 *
 * Return: On success, a pointer to the duplicated string.
 * On failure or if str is NULL, returns NULL.
 */

char *_strdup(char *str)
{
	size_t len;
	char *duplicate;

	if (str == NULL)
		return (NULL);
	len = strlen(str);
	duplicate = malloc((len + 1) * sizeof(char));

	if (duplicate == NULL)
		return (NULL);

	strcpy(duplicate, str);

	return (duplicate);
}
