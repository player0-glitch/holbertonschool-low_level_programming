#include "main.h"
#include <unistd.h>

/**
 * puts2 - write only even numbers
 */
void puts2(char *str)
{
	char* p = str;
	int n;
	
	while (*p != '\0')
	{
		n = (int)*p;
		if (n % 2 == 0)
			write(1, &n, 1);
		p++;
	}
}
