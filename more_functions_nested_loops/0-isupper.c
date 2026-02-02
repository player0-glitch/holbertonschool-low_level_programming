#include <ctype.h>
/**
 * _isupper - prints out the character passed in
 *
 * @c: the character to be printed
 *
 * Return: 1 on uppercase 0 otherwise
 */
int _isupper(int c)
{
	if (isupper(c) > 0)
		return (1);
	else
		return (0);
}
