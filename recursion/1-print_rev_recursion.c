#include "main.h"

/**
 * _print_rev_recursion - prints a string recursively in reverse
 * @s: string to print
 */
void _print_rev_recursion(char *s)
{
  if (*s == '\0')
  {
    _putschar('\n');

    return;
  }

  _print_rev_recursion(s + 1);
  _putschar(*s);
}
