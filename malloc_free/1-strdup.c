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
	char *dest = NULL;
	size_t len = 0;

	if (str == NULL)
		return (NULL);
	dest = str;
	while (*dest++)
		len++;
	dest = (char *)malloc(len * sizeof(char));

	/*incase OS fails to give memory*/
	if (dest == NULL)
		return (NULL);

	memcpy(dest, str, len);
	/* dest[(len + 1)] = '\0'; */
	return (dest);
}
