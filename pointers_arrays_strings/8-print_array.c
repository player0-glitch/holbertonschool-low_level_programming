#include "main.h"
#include <stdio.h>

/**
 * print_array - print an array
 *
 * @a: an array
 *
 * @n: size of array
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i == n - 1)
			break;
		printf(", ");
	}
	printf("\n");
}
