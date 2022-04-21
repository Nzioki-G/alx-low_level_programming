#include "main.h"

/**
  * print_array - print n elements of array
  * @a: pointer to the array
  * @n: number of elements
  * Return: void
  */
void print_array(int *a, int n)
{
	int i;

	/* loop to n-1 (for separating) */
	for (i = 0; i < (n - 1); i++)
	printf("%d, ", *(a+i));

	/* print nth */
	printf("%d\n", a[i]);

}
