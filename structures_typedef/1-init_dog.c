#include "dog.h"

/**
 * init_dog - constructor of the dog struct
 * @d: pointer to struct
 * @name: to be set for the dog struct
 * @age: age for dog struct
 * @owner: name of the dog struct
 */
void init_dog(dog_t *d, char *name, float age, char *owner)
{
	if (!d)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
