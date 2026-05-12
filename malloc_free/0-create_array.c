#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * create_array - makes a dynamic array
 *
 * @size: size of the array
 * @c: chars to fill the array
 *
 * Return: pointer to the start of the array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr = NULL;

	if (size == 0)
		return (NULL);
	arr = (char *)malloc(size * sizeof(c));

	if (!arr)
		return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = c;
	return (arr);
}
