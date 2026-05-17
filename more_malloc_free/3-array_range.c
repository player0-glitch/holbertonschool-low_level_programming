#include "main.h"
#include <stdlib.h>

/**
 * array_range - create an array with a range between parameters
 * @min: min to be included
 * @max: max to be included
 *
 * Return - int pointer to array
 */
int *array_range(int min, int max)
{
	int *arr = NULL;
	size_t i = 0;

	if (max < min)
		return (NULL);
	arr = (int *)malloc(sizeof(int) * (max - min + 1));

	while (min <= max)
		{
			arr[i] = min;
			i++;
			min++;
		}
	return (arr);
}
