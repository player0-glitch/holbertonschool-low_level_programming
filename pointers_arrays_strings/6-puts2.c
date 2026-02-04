#include "main.h"
#include <unistd.h>

/**
 * puts2 - write only every other char
 * @str: string to print
 */
void puts2(char *str)
{
	char *p = str;
	char c = '\n';
	int n = 0;

	while (*p != '\0')
	{
		if (n % 2 == 0)
			write(1, p, 1);
		n++;
		p++;
	}

	write(1, &c, 1);
}
