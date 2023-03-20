#ifndef DOG_H
#define DOG_H

/**
 * struct dog - dogs identification details
 * @name: Dog's name
 * @age: Dog's age
 * @owner: Dog's owner
 *
 * Description: A structure defined to record
 * dogs' details
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
}dog;

#endif
