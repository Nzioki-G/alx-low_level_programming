#include "main.h"

/**
  * reverse_array - reverses the contents of an array
  * @a: the array in question
  * @n: number of elements in a
  * Return: void
  */
void reverse_array(int *a, int n)
{
	int i, midpoint, temp;

	/* set midpoint */
	midpoint = n / 2;

	/* loop through to mid of array */
	for (i = 0; i < midpoint; i++)
	{
		/* swap the values at index "i" and "(n-1)-i" */
		temp = a[i];
		a[i] = a[n - (i + 1)];
		a[n - (i + 1)] = temp;
	}
}
