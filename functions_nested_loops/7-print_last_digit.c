#include "main.h"
#include <stdlib.h>
/**
 * print_last_digit - prints out the last digit of a number
 *
 * @n: number to get last digit from
 *
 * Return: Always last digit of passed in number
 */
int print_last_digit(int n)
{
	int c = abs(n % 10);

	_putchar('0' + c);
	return (c);
}
