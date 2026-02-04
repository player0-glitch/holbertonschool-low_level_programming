#include "main.h"

/**
 * _strcat - concatenate head src to dest tail
 *
 * @src: source string
 *
 * @dest: destination string
 *
 * Return: pointer to concatenated string
 */
char *_strcat(char *dest, char *src)
{
	char *d = dest; /*pointer to destination*/
	char *s = src; /* pointer ro sourc string*/

	while (*d != '\0')
		d++;
	/* d should now be a null terminator */
	while (*s != '\0')
	{
		*d = *s;
		d++;
		s++;
	}
	*d = '\0';
	return (d);
}
