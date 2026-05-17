#include "dog.h"
#include <stdio.h>

/**
 * print_dog - prints a dog struct
 * @d: struct to be printed
 */
void print_dog(struct dog *d)
{
	if (!d)
		return;
	/*only name or owner can be null*/
	if (!d->name)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	if (!d->owner)
		printf("Owner: (nil)\n");
	else
		printf("Owner: %s\n", d->owner);
}
