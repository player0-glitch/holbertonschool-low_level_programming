#include "main.h"

/**
 * swap_int - swap out values of 2 ints
 *
 * @a: numbers to swap with b
 *
 * @b : number to swap with a
 */
void swap_int(int *a, int *b)
{
	int c;
	c = *a;
	*a = *b;
	*b = c;
}
