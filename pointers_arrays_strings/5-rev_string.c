#include "main.h"
#include <unistd.h>
/**
 * rev_string -  reverse a string in-place
 *
 * @s: string head pointer to reverse
 */
void rev_string(char *s)
{
	char c = 0;
	char *i = s;
	char *j = s;

	while ((*j) != '\0')
		j++;

	j--;
	while (i < j)
	{
		c = *i;
		*i = *j;
		*j = c;
		i++;
		j--;
	}
}
