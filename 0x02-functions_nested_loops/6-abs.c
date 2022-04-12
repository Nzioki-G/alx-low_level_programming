#include "main.h"

/**
  * _abs - gets the the absolute value of number
  * @num: the integer to be absoluted
  * Return: absolute val
  */
int _abs(int num)
{
	if (num >= 0)
		return (num);
	else
		return (num * -1);
}
