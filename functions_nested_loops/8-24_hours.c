#include "main.h"

/**
 * jack_bauer - prints time in 24hr format
 */
void jack_bauer(void)
{
	int hour, minute;

	char c;

	for (hour = 0; hour < 24; hour++)
	{
		for (minute = 0; minute < 60; minute++)
		{
			c = (hour / 10);
			_putchar('0' + c);
			c = (hour % 10);
			_putchar('0' + c);
			_putchar(':');
			c = (minute / 10);
			_putchar('0' + c);
			c = minute % 10;
			_putchar('0' + c);
			_putchar('\n');
		}
	}

}
