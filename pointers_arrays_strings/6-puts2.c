#include "main.h"
#include <unistd.h>

/**
 * puts2 - write only even numbers
 */
void puts2(char *str)
{
	char* p = str;
	int n = 0;
	
	while (*p != '\0')
	{
		if (n % 2 == 0)
			write(1, p, 1);
		n++;
		p++;
	}
}
