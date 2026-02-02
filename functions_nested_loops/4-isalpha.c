#include "main.h"
#include <ctype.h>

/**
 * _isalpha - returns 1 on success otherwise  0
 * @c: The integer type to check for casing
 *
 * Return: 1 on lowercase and 0 on not
 */
int _isalpha(int c)
{
	if (isalpha(c) > 0)
		return (1);
	else
		return (0);
}
