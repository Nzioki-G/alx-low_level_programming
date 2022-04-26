#include "main.h"

/**
  * print_diagsums - adds the diagonals of a square matrix
  * @a: the 2d array/matrix
  * @size: the dimensions of matric
  * Return: nothing
  */
void print_diagsums(int *a, int size)
{
	int row, col, index = 0, sum_left = 0, sum_right = 0;

	for (row = 0; row < size; row++)
	{
		for (col = 0; col < size; col++)
		{
			if (row == col)
			{
				sum_left += a[index];
			}
			index++;
		}
	}
	printf("%d, ", sum_left);

	index = 0;
	for (row = 0; row < size; row++)
	{
		for (col = 0; col < size; col++)
		{

			if (row + col == (size - 1))
			{
				sum_right += a[index];
			}
			index++;
		}
	}

	printf("%d\n", sum_right);
}
