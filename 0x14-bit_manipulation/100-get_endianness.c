#include "main.h"

/**
 * get_endianness - checks the endianness (of CPU?)
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	/* 15: 1111 0000 0000 0000 (l.e.)   0000 0000 0000 1111 (b.e.)  */
	int number = 15;
	int *pointer = &number;

	if (*(pointer) == number)
		return (1);
	return (0);
}
