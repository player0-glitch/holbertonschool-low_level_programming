#include "main.h"

/**
 */
void _print_rev_recursion(char *s)
{
  if (*s == '\0')
  {
    _putschar('\n');

    return;
  }

  _print_rev_recursion(s+1);
  _putschar(*s);
}
