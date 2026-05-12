#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - allocate 2D array of chars
 * @width: rows of the grid
 * @height: columns of the grid
 *
 * Return: pointer to the pointer of the first row;
 */
int **alloc_grid(int width, int height)
{
  int i, j;

  int **head = NULL;
  if (width < 1 || height < 1)
    return (NULL);

  head = (int **)malloc(sizeof(int *) * height);

  if (head == NULL)
    return (NULL);

  for (i = 0; i < height; i++)
    {
      head[i] = (int *)malloc(width * sizeof(int));
      if (head[i] == NULL)
        {
          for (j = 0; j < i; j++)
            free(head[j]);

          free(head);
          return (NULL);
        }
    }
  /*All memory is properly  allocated*/
  for (i = 0; i < height; i++)
    for (j = 0; j < width; j++)
      head[i][j] = 0;

  return (head);
}
