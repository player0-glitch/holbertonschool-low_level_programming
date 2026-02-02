#include "main.h"
#include <stdio.h>

/**
 * times_table - prints out 9 times table diagonally
 */
void times_table(void)
{
	int col, row, n;

	for ( row = 0; row < 10; row++)
	{
		for (col = 0; col < 10; col++)
		{
			n = row * col;
			printf("%d, ", n);
		}
		printf("\n");
	}
}
