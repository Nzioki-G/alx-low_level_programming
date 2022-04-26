#include "main.h"

/**
  * print_diagsums - adds the diagonals of a square matrix
  * @a: the 2d array/matrix
  * @size: the dimensions of matric
  * Return: nothing
  */
void print_diagsums(int *a, int size)
{
	int row, col, index = -1, sum_left = 0, sum_right = 0;

	for (row = 0; row < size; row++)
	{
		for (col = 0; col < size; col++)
		{
			index++;
			if (row == col)
			{
				printf("r=%d, c=%d, index:%d \n", row, col, index);
				sum_left += a[index];
			}
		}
	}
	printf("d1:%d \n", sum_left);

	index = -1;
	for (row = 0; row < size; row++)
	{
		for (col = 0; col < size; col++)
		{
			index++;

			if (row + col == (size - 1))
			{
				printf("r=%d, c=%d, index:%d\n", row, col, index);
				sum_right += a[index];
			}
		}
	}

	printf("d2:%d\n", sum_right);
}
