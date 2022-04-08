#include <stdio.h>

/**
  * main - prints all possible 3-digit combos no repeats
  * Return: 0
  **/
int main(void)
{
	int ones, tens, hundreds;

	for (hundreds = 0; hundreds <= 9; hundreds++)
	{
		for (tens = 0; tens <= 9; tens++)
		{
			for (ones = 0; ones <= 9; ones++)
			{
				int u, v, w, x, y, z;

				u = hundreds * 100 + tens * 10 + ones;
				v = tens * 100 + ones * 10 + hundreds;
				w = tens * 100 + hundreds * 10 + ones;
				x = hundreds * 100 + ones * 10 + tens;
				y = ones * 100 + hundreds * 10 + tens;
				z = ones * 100 + tens * 10 + hundreds;
				if (u < v && u < w && u < x && u < y && u < z)
				{
					putchar('0' + hundreds);
					putchar('0' + tens);
					putchar('0' + ones);

					if (hundreds != 7 || tens != 8 || ones != 9)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

