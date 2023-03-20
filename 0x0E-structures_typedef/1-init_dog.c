#include "dog.h"

/**
 * init_dog - initializing a struct dog
 * @d: Our structure
 * @name: Dog's name
 * @age: Dog's age
 * @owner: Dog's owner
 *
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
