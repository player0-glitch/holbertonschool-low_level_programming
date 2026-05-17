#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - makes a new dog
 * @name: name of the new dog
 * @age:age of the new dog
 * @owner: for the new dog
 *
 * Return - pointer to the new dog type
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog = (dog_t *)malloc(sizeof(dog_t));

	if (!dog)
		return (NULL);
	dog->age = age;
	dog->name = name;
	dog->owner = owner;

	return (dog);
}
