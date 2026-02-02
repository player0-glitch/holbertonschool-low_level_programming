#include "main.h"
#include <ctype.h>

/**
 * _islower - returns 1 on success otherwise  0
 * @n: The integera type tpo check for casing
 *
 * Return: 1 on lowercase and 0 on not
 */
int _islower(int n)
{
	if (islower(n) > 0)
		return (1);
	else
		return (0);
}
