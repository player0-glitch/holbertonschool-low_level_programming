#include "main.h"

/**
 * _sqrt - calculate square root
 * @n: number to calculate
 * @guesser: a guesser used to determine
 * whether n has a natural squareroot
 *
 * Return: result
 */
int _sqrt(int n, int guesser)
{
  if (guesser * guesser > n)
    return (-1);
  else if (guesser * guesser == n)
    return (guesser);
  return (_sqrt(n, guesser + 1));
}

/**
 * _sqrt_recursion - find the square root of a
 * natural number
 * @n: number to calculate
 *
 * Return: calculated squareroot
 */
int _sqrt_recursion(int n)
{
  if (n < 0)
    return (-1);

  return (_sqrt(n, 0));
}

