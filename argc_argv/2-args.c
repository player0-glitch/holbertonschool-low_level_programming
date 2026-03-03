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
  int i;

  for(i = 0; i < argc; i++)
    printf("%s\n",argv[i]);

  return (0);
}
