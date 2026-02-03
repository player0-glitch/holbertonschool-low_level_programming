#include "main.h"

/**
 * print_most_numbers -  print 0 - 9 except for 2 & 4
 */
void print_most_numbers(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		if (n == 2 || n == 4)
			continue;
		_putchar('0' + n);
	}
	_putchar('\n');
}
