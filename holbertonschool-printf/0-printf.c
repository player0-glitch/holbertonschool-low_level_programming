#include "main.h"
#include <stdarg.h>
#include <unistd.h>

/**
 * _printf - write ouput to the stdout
 *@format: format to follow printing out to stdout
 * Return: the number of characters printed (excluding null byte)
 */
int _printf(const char *format, ...)
{

	va_list args;
	int i = 0, count = 0;
	char *str;
	char c;

	/* No formatter has been given*/
	if (!format)
		return (-1);

	va_start(args, format);

	while (format && format[i])
		{
			if (format[i] == '%')
				{
					i++;
					/*edge case for trailing white space
					 * instead of specifier after '%'*/
					if (format[i] == '\0')
						return (-1);

					switch (format[i])
						{
							case 'c':
								c = va_arg(args,
									   int);
								count +=
								    _putchar(c);
								break;
							case 's':
								str = va_arg(
								    args,
								    char *);
								if (!str)
									str =
									    "(n"
									    "ul"
									    "l"
									    ")";
								while (*str)
									{
										count += _putchar(
										    *str);
										str++;
									}
								break;
							case '%':
								count +=
								    _putchar(
									'%');
								break;
							default:
								count +=
								    _putchar(
									'%');
								count +=
								    _putchar(
									format
									    [i]);
								break;
						}
				}
			else
				{
					count += _putchar(format[i]);
				}
			i++;
		}

	va_end(args);
	return (count);
}
