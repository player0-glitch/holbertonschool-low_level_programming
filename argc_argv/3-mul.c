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
  int x, y; 
  if (argc <= 2)
    exit(0);

  (void)argc;
  x = atoi(argv[argc - 2]);
  y = atoi(argv[argc - 1]);

  printf("%d\n", x * y);
  return (0);
}
