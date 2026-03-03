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
  long arg, sum = 0;
  int i;
  char *p;

  /* telling the compiler to ignore this*/
  for (i = 1; i < argc; i++)
  {
    /* convert char to int*/
    arg =strtol(argv[i], &p, 10);
    if ( *p == '\0')
    {
      printf("Error\n");
      exit(EXIT_SUCCESS);
    }
    sum += arg;
  }
  printf("%ld\n", sum);
  return (0);
}
