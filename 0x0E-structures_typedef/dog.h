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
} dog_t;

/* Other project function prototypes */
void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

dog_t *new_dog(char *name, float age, char *owner);

void free_dog(dog_t *d);
#endif
