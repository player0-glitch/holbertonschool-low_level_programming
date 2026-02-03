#include "main.h"

/**
 * more_numbers - print numbers to 14 ten times
 */
void more_numbers(void)
{
	int it, n;

	for (it = 0; it < 10; it++)
	{
		for (n = 0; n < 14; n++)
			_putchar('0' + n);
		_putchar('\n');
	}
}
