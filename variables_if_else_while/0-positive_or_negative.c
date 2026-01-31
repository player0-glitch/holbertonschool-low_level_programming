#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes here */

/*
 * main - Entry point
 *
 * Return: 0 for success
 */
int main(void)
{
	int n;

	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
	{
		printf("%d is positive", n);
	}
	else if (n < 0)
	{
		printf("%d is negative", n);
	}
	else
	{
		printf("%d is zero", n);
	}
	return (0);
}
