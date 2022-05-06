#include "main.h"

/**
  * alloc_grid - points to a 2d array
  * @width: number of columns in the array
  * @height: number of rows in the array
  * Return: pointer to this 2D array
  */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **ar; /* arr points to a pointer of int array */

	/* if either args <=0 */
	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	/* malloc FOR rows in ar */
	ar = malloc(height * sizeof(int));

	/* malloc WITHIN row */
	for (i = 0; i < height; i++)
	{
		*(ar + i) = malloc(width * sizeof(int));
	}

	/* check that malloc worked */
	if (ar)
	{
		for (i = 0; i < height; i++)
		{
			for (j = 0; j < width; j++)
			{
				/* initialize with 0 */
				*(*(ar + i) + j) = 0;
			}
		}
		return (ar);
	}
	else
	{
		return (NULL);
	}
}
