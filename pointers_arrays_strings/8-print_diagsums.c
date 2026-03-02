#include "main.h"

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
  int sum = 0;
  
  for (i = 0; i < size; i++)
  {
    /* diag 1 */
    sum += a[i][i];

    /* diag 2 */
    sum += a[i][size - i - 1];
  }

  /* if the array is of size 2n+1 */
  if (size % 2 != 0)
    sum -= a[size / 2][size / 2];
}
