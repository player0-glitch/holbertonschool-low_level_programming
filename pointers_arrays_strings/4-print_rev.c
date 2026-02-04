#include "main.h"
#include <unistd.h>

/**
 * print_rev - write string in reverse using pointers
 *
 * @s: string to reverse
 */
void print_rev(char *s)
{
	int i = 0, len;
	char c;

	while (s[i] != '\0')
		i++;
	len = i - 1;
	for (i = len; i >= 0; --i)
		write(1, &s[i], 1);
	c = '\n';
	write(1, &c, 1);
}
