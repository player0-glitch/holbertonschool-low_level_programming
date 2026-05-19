#include "function_pointers.h"

/**
 * array_iterator - used to iterate an array using a action
 * @array: array we're iterating through
 * @size: size of the array
 * @action: iterator function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (!array || size == 0 || (!action))
		return;

	for (i = 0; i < size; ++i)
		{
			action(array[i]);
		}
}
