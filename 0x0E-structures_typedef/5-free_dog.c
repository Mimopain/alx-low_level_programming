#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Frees the memory allocated for a struct dog
 * @d: Pointer to the struct dog
 *
 * Description: This function frees the memory allocated for the name
 * and owner strings, and then frees the memory for the struct dog itself.
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
