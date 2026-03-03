#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code
 *
 * @argc: number o command line arguments
 * @argv: command line arguments
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	if (argc == 0)
		exit(0);
	printf("%s\n", argv[0]);
	return (0);
}
