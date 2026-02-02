#include <stdio.h>
#include <ctype.h>

/**
 * _isdigit - is this  a digit
 *
 * @c: charavter being checked
 *
 * Return: a number
 */
int _isdigit(char c)
{
	if (isdigit(c) > 0)
		return (1);
	else
		return (0);
}
