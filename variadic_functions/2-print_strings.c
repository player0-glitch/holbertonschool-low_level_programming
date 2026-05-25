#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints n strings
 *@seperator: separator that will be used
 *@n: number of the strings to print
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	int i;
	if (n < 1)
		return;
	va_start(args, n);

	for (i = 0; i < n; ++i)
		{
			printf("%s", va_arg(args, const char *));
			if (i == (n - 1))
				break;
			if (!separator)
				continue;
			printf("%s", separator);
		}
	printf("\n");
}
