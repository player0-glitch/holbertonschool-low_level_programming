#include "main.h"
#include <unistd.h>
#include <stdio.h>
/**
 * _puts - prints out string
 *
 * @str: string to printerd to stdout
 */
void _puts(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		putchar(str[i]);
		++i;
	}
	putchar('\n');
}
