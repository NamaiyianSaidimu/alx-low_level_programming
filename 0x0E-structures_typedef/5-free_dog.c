#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - freeing struct dog
 * @d: instance of struct dog
 *
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
