#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - Frees the memory allocated to the structure dog_t
 * @d: The pointer to a structure dog_t
 *
 * Return: Void
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d->name);
	free(d->owner);
	free(d);
}

