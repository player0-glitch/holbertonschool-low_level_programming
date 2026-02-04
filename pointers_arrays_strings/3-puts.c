#include "main.h"
#include <unistd.h>
#include <string.h>

/**
 * _puts - prints out string
 *
 * @str: string to printerd to stdout
 */
void _puts(char *str)
{
	int len, i;
	char c;

	i = 0;
	len = strlen(str);
	c = '\n';
	while (i < (len-1))
	{
		write(1,&str[i],1);
		++i;
	}
	write(1,&c,1);
}
