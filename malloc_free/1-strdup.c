#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - should return duplicate string
 * @str: string to duplicate
 *
 * Return: copied string
 */
char *_strdup(char *str)
{
  char *dest = NULL;
  size_t len = strlen(str);

  if (str == NULL)
    return (NULL);
  dest = (char *)malloc(len * sizeof(str));

  /*incase OS fails to give memory*/
  if (dest == NULL)
    return (NULL);

  memcpy(dest, str, len);

  return (dest);
}
