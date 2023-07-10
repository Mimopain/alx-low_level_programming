#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * argstostr - Concatenates all the arguments of the program.
 * @ac: The argument count.
 * @av: The argument vector.
 *
 * Return: On success, a pointer to the concatenated string.
 * On failure or if ac == 0 or av == NULL, returns NULL.
 */

char *argstostr(int ac, char **av)
{
	int i,j;
	int position;
	int total_length;
	char *concatenated;

	total_length = 0;
	position = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
		total_length += strlen(av[i]) + 1;

	concatenated = malloc((total_length + 1) * sizeof(char));
	if (concatenated == NULL)
		return (NULL);

	position = 0;

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			concatenated[position++] = av[i][j];

		concatenated[position++] = '\n';
	}

	concatenated[position] = '\0';

	return (concatenated);
}
