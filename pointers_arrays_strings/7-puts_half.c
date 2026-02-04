#include "main.h"
#include <unistd.h>

/**
 * puts_half - print second half of a string
 *
 * @str: string to print
 */
void puts_half(char *str)
{
	int i = 0, len = 0;

	while (str[i] != '\0')
		i++;
	len = i;
	
	if (len % 2)
		i = (len + 1) / 2;
	else
		i = len / 2;
	for (; i < len; i++)
		write(1, &str[i], 1);
	write(1, "\n", 1);
}
