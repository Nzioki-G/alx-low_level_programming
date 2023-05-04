#include <stdio.h>

/**
 * get_endianness - get the endianness of the machine it runs on
 * research tool: ChatGPT
 * Return: 0 -> Big Endian, 1 -> Little Endian
 */
int get_endianness(void)
{
	int n = 5;
	char *hex;
	
	/**
	 * if 5 takes 4 bytes in memory it will be:
	 * 00000000 00000000 00000000 00000101
	 * big endian stores in above order
	 * little endian stores in reverse
	 */
	hex = (char *)&n;
	if (hex)
		return (1);

	return (0);
}
