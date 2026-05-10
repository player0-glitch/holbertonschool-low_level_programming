#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * create_array - makes a dynamic array
 *
 * @size: size of the array
 * @c: chars to fill the array
 */
char *create_array(unsigned int size, char c) {
  int i;
  char *arr = NULL;

  if (size == 0)
    return NULL;
  arr = (char *)malloc(size * sizeof(c));
  /* Null safety checks */
  if (!arr)
    return NULL;

  for (i = 0; i < size - 1; i++)
    arr[i] = c;
  return arr;
}
