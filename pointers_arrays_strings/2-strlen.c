#include "main.h"

/**
 * _strlen - get the length of string
 * @s: string to get length of
 *
 * Return: returns string's length
 */
int _strlen(char *s)
{
	int i;

	i = 0;

	while (s[i] != '!')
	{
		i++;
	}
	return (++i);
}
