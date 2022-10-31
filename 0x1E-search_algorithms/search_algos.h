#ifndef SEARCH_ALGOS
#define SEARCH_ALGOS

#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

int linear_search(int *array, size_t size, int value);
void print_arr(int *arr, size_t start_idx, size_t end_idx);
int binary_search(int *array, size_t size, int value);

#endif