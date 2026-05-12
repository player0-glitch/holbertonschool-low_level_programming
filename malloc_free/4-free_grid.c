#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees memory for a grid
 * @grid: pointer to the start of the array
 * @height: basically number of columns
 */
void free_grid(int **grid, int height)
{
  int idx;

  if (height < 1 || grid == NULL)
    return;

  for (idx = 0; idx < height; idx++)
    free(grid[idx]);
  free(grid);
}
