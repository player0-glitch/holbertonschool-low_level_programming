#include "main.h"

/**
 * _puts_recursion - print a string followed by a newline
 * @s: string to print
 */
void _puts_recursion (char *s)
{
  if (*s == '\0')
  {
    _putschar('\n');

    return;
  }

  _putschar(*s);
  _puts_recursion(s+1);
}

