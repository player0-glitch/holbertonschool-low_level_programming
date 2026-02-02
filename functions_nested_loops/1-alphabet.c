#include "main.h"
/**
 * print_alphabet - prints out alphabet using wrapper for write syscall
 */
void print_alphabet(void)
{
	int n;

	for (n = 97; n < 123; n++)
		_putchar(n);

	_putchar('\n');
}

