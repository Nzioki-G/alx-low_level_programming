#include <stdio.h>

/**
 * first - executes before main()
 *
 * Return: nothing
 */
void __attribute__ ((constructor)) first()
{
	printf("You're beat! and yet, you must ");
	printf("allow,\nI bore my house upon my back!\n");
}
