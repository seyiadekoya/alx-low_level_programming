#include "main.h"
#include <stdio.h>

/**
 * get_endianness - checks the endianness
 * Return: 0 or 1
 */
int get_endianness(void)
{
	unsigned int a = 1;
	char *b = (char *) &a;

	if (*b)
		return (1);
	else
		return (0);
}
