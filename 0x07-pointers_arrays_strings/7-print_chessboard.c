#include "main.h"

/**
  * print_chessboard - prints THE chessboard
  * @a: a 2D array representation of the chess board
  * Return: not a thing
  */
void print_chessboard(char (*a)[8])
{
	int row, col;

	for (row = 0; row < 8; row++)
	{
		for (col = 0; col < 8; col++)
		{
			_putchar(a[row][col]);
		}
		_putchar('\n');
	}
}
