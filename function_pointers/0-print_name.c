
#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - print name using rule
 * @name: name to be printed
 * @f: function with print rule
 */
void print_name(char *name, void (*f)(char *))
{
	if (!f)
		printf("%s\n", name);
	if (!name)
		f(NULL);
	f(name);
}
