#include "main.h"
#include <stdio.h>

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: the number to be checked
 * @index: the index of the bit you want to set
 * Return: 1 0r -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int result = 1;

	if (sizeof(n) * 8 < index)
		return (-1);
	result <<= index;
	*n |= result;
	return (1);
}
