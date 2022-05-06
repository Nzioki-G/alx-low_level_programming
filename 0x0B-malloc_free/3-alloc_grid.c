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
	int **ar; /* array of pointers (arrays) */

	/* if either args <=0 */
	if (width <= 0 || height <= 0)
		return (NULL);

	/* malloc FOR rows in ar */
	ar = (int **)malloc(height * sizeof(int *));

	/* malloc WITHIN row if rows exist */
	if (ar)
	{
		for (i = 0; i < height; i++)
		{
			*(ar + i) = (int *)malloc(width * sizeof(int));
		}
	}
	else
	{
		free(ar);
		return (NULL);
	}

	/* check that malloc worked */
	if (ar && *ar)
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
		return (NULL);
}
