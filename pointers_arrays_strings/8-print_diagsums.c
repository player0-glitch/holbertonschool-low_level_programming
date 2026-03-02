#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - print sum of diagonal square
 * entries
 *
 * @a: array to print from
 * @size: size of the square array
 */
void print_diagsums(int *a, int size)
{
	int i;
	int sum1 = 0;
	int sum2 = 0;

	for (i = 0; i < size; i++)
	{
		/* diag 1 */
		sum1 += a[i * size + i];

		/* diag 2 */
		sum2 += a[i * size + (size - i - 1)];
	}
	/* if the array is of size 2n+1 */
	if (size % 2 != 0)
	{
		sum1 -= a[size / 2 * size + (size / 2)];
		sum2 -= a[size / 2 * size + (size / 2)];
	}
}
