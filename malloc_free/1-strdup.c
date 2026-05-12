#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - should return duplicate string
 * @str: string to duplicate
 *
 * Return: copied string
 */
char *_strdup(char *str)
{
	char *d;
	char *dest = NULL;
	size_t len = 0;

	if (str == NULL)
		return (NULL);
	dest = str;
	while (*dest++)
		len++;
	dest = (char *)malloc(len + 1);

	/*incase OS fails to give memory*/
	if (dest == NULL)
		return (NULL);
	d = dest;
	while (*str != '\0')
		{
			*d = *str;
			d++;
			str++;
		}
	*d = '\0';
	return (dest);
}
