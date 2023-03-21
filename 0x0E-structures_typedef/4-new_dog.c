#include "dog.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * new_dog - creating a new dog
 * @name: Dog's name
 * @age: Dog's age
 * @owner: Dog's owner
 *
 * Return: void
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int name_length = 0, owner_length = 0, i;
	dog_t *new_doggo;

	for (i = 0; name[i] != '\0'; i++)
		name_length++;
	for (i = 0; owner[i] != '\0'; i++)
		owner_length++;
	new_doggo = malloc(sizeof(dog_t));
	if (new_doggo == NULL)
		return (NULL);
	new_doggo->name = malloc(name_length * sizeof(new_doggo->name));
	for (i = 0; i < name_length; i++)
		new_doggo->name[i] = name[i];

	new_doggo->age = age;

	new_doggo->owner = malloc(owner_length * sizeof(new_doggo->owner));
	for (i = 0; i < owner_length; i++)
		new_doggo->owner[i] = owner[i];
	return (new_doggo);
}
