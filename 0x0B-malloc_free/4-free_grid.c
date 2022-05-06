#include "main.h"

/**
  * free_grid - frees a 2d grid
  * @grid: pointer to the 2d array grid
  * @height: the number of rows in grid
  *
  * Return: void/notathing
  */
void free_grid(int **grid, int height)
{
	int i;

	/* first free each row */
	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	/* free the array of "empty" rows */
	free(grid);
}
