#include "main.h"
#include <stddef.h>

/**
 * _strlen_recursion - returns length of a string using recursion
 * @s: string
 *
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
	if (s == NULL || *s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
