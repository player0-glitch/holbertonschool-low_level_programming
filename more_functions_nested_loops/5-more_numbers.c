#include "main.h"

/**
 * more_numbers - print numbers to 14 ten times
 */
void more_numbers(void)
{
	int it, n;

	char c;

	for (it = 0; it < 10; it++)
	{
		for (n = 0; n < 15; n++)
		{
			c = n;
			if (n >= 10)
			{
				c = (n / 10);
				_putchar('0' + c);
				c = (n % 10);
			}
			_putchar('0' + c);
		}
		_putchar('\n');
	}
}
