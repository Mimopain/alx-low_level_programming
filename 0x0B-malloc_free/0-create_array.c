#include "main.h"
#include <stdlib.h>

/**
 * create_array - Creates an array of chars and initializes it with a specific
 * char.
 * @size: The size of the array to create.
 * @c: The character to initialize the array with.
 *
 * Return: On success, a pointer to the created array.
 * On failure or if size is 0, returns NULL.
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
		return (NULL);

	array = malloc((size + 1) * sizeof(char));
	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = c;

	array[size] = '\0'; /* Add null terminator at the end */

	return (array);
}
