#include "main.h"

/**
  * rev_string - revereses a string
  * @s: the string to be reversed
  * Return: void
  */
void rev_string(char *s)
{
	int i, count = 0, midpoint;
	char temp;

	/* get string length */
	while (s[count])
		count++;

	/* loop to mid-point and swap char by char */
	if (count % 2 == 0)
		midpoint = count / 2;
	else
		midpoint = (count / 2) + 1;

	for (i = 0; i < midpoint; i++)
	{
		temp = s[i];
		s[i] = s[count - 1];
		s[count - 1] = temp;
		count--;
	}
}
