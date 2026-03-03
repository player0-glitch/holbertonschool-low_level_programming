#include "main.h"
/**
 * prime_helper - helps find if a number is a prime
 * @n: a number to check for
 * @d: what we're using for checking is
 * n is a prime
 *
 * Return: int
 */
int prime_helper(int n, int d)
{
  if (d * d > n)
    return (1); /*no divisor, likely a prime*/

  if (n % d == 0)
    return (0); /*no prime exists here*/

  return (prime_helper(n, d + 1));
}
/**
 * is_prime_number - calculate if a number is a prime
 *@n: number to check
 *
 * Return: 1 on prime and 0 on not
 */
int is_prime_number(int n)
{
  if (n <= 1)
    return (0);

  return (prime_helper(n, 2));
}
