#include <unistd.h>
#include "main.h"

/**
 * _putchar - writes the charater c to stdout
 * @c: The character to print
 *
 * Return: On Sucecess1.
 * On error, -1 is returned, and errno is set appropriatley
 */
int _putchar(char c)
{
	return write(1,&c,1);
}


