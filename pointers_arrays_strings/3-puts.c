#include "main.h"
#include <unistd.h>

/**
 * _puts - prints out string
 *
 * @str: string to printerd to stdout
 */
void _puts(char *str)
{
	int i;
	char c;

	i = 0;
	c = '\n';
	while (str[i] != '\0')
	{
		write(1,&(str[i]),1);
		i++;
	}
	write(1,&c,1);
}
