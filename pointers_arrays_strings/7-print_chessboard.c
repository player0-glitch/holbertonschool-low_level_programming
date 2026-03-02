#include "main.h"

/**
 * print_chessboard - function that prints out a 8x8
 * chessboard
 *
 * @a: array of chessboard
 * Return: void
 */
void print_chessboard(char *a)
{
	int s1;
	int s2;

	for (s1 = 0; s1 < 8; s1++)
	{
		for (s2 = 0; s2 < 8; s2++)
		{
			printf("%s", a[s1][s2]);
		}
		printf("\n");
	}
}
