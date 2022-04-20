#include "main.h"

/**
  * swap_int - swaps to integer values
  * @*a: pointer to first value
  * @*b: pointer to second value
  * Return: void
  */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
