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
	size_t name_len, owner_len;

	dog_t *dog = (dog_t *)malloc(sizeof(dog_t));

	if (!dog)
		return (NULL);
	dog->age = age;

	/*Allocate memory for the name so that you don't point
	 * to the same location of memory*/
	name_len = get_str_len(name);
	dog->name = (char *)malloc(sizeof(char *) * (name_len));

	/*this could fail, fix any errors*/
	if (!dog->name)
		{
			free(dog);
			return (NULL);
		}
	/*Same story for the owner*/
	owner_len = get_str_len(owner);
	dog->owner = (char *)malloc(sizeof(char *) * owner_len);
	if (!dog->owner)
		{
			free((char *)dog->name);
			free(dog);
			return (NULL);
		}
	/*Memory has been allocated so we can safely copy over
	 * data we need into it*/
	strcpy(dog->name, name);
	strcpy(dog->owner, owner);
	return (dog);
}

size_t get_str_len(char *str)
{
	size_t l = 0;
	if (!str)
		return (0);
	while (str[l] != '\0')
		l++;
	return (1 + l);
}
