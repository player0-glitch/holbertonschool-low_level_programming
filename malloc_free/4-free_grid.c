#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees memory for a grid
 * @grid: pointer to the start of the array
 * @height: basically number of columns
 */
void free_grid(int **grid, int height) 
{
  int i, j;
  if (grid == NULL)
    return;

  for(i = 0; i < height; ++i)
  {
      free(grid[i]);
  }
  free(grid);
  grid = NULL;
}
