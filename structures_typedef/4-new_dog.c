#include "dog.h"
#include <stdlib.h>
#include <string.h>
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
	int name_len = 0, owner_len = 0;

	dog_t *dog = (dog_t *)malloc(sizeof(dog_t));

	if (!dog)
		return (NULL);
	dog->age = age;

	/*Allocate memory for the name so that you don't point
	 * to the same location of memory*/
	while (name[name_len] != '\0')
		name_len++;

	dog->name = (char *)malloc(sizeof(char *) * (name_len + 1));

	/*this could fail, fix any errors*/
	if (!dog->name)
		{
			free(dog);
			return (NULL);
		}
	/*Same story for the owner*/
	while (owner[owner_len] != '\0')
		owner_len++;

	dog->owner = (char *)malloc(sizeof(char *) * owner_len + 1);
	if (!dog->owner)
		{
			free((char *)dog->name);
			free(dog);
			return (NULL);
		}
	/*Memory has been allocated so we can safely copy over
	 * data we need into it*/
	copy_str(dog->name, name);
	copy_str(dog->owner, owner);
	return (dog);
}

void copy_str(char *d, char *s)
{
	int i = 0;
	while (s[i] != '\0')
		{
			d[i] = s[i];
			i++;
		}
	d[i] = '\0';
}
