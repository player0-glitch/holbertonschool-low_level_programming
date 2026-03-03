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

int main (int argc, char *argv[])
{
  /* tell compiler to purposely ignore this variable*/
  (void)argv;
  printf("%d\n", (argc- 1));
  return (0);
}
