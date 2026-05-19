#include "3-calc.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * main - check the code
 *
 * Return - Always 0
 */
int main(int argc, char *argv[])
{
	int a, b;
	op_t my_math;

	/*First get all the command line arguements*/
	if (argc != 4)
		exit(1);
	a = atoi(argv[1]);
	b = atoi(argv[3]);

	my_math.op = argv[2];

	my_math.f = get_op_func(my_math.op);

	if (!my_math.f)
		printf("Error\n");
	printf("%d\n", my_math.f(a, b));

	return (0);
}
