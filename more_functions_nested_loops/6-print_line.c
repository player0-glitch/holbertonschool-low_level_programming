#include "main.h"

/**
 * print_line - print n number of lines
 * @n: number of lines to print
 */
void print_line(int n)
{
	int it;

	for (it = 0; it < n; it++)
		_putchar('_');
	_putchar('\n');
}
