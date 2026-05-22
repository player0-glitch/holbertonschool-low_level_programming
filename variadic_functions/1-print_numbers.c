#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints numbers separated delimiter
 *
 * @separator: a separator for our listed numbers
 * @n: number of arguements
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	int i;
	if (!separator || n < 1)
		return;
	va_start(args, n);

	for (i = 0; i < n; ++i)
		{
			printf("%d", i);
			if (i == (n - 1))
				break;
			printf("%s", separator);
		}

	printf("\n");
}
