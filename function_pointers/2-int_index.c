#include "function_pointers.h"

/**
 * int_index - search for an integer
 * @array: array to search from
 * @size: size of the array
 * @cmp: function to compare values
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size < 1 || !array || cmp == NULL)
		return (-1);

	for (i = 0; i < size; ++i)
		{
			if (cmp(array[i]) != 0)
				{
					return (i);
				}
		}
	return (-1);
}
