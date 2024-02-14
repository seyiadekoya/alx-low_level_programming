#include "main.h"
#include <stdio.h>

/**
 * get_bit - returns the value of a bit at a given index
 * @n: the number to be checked
 * @index: the index to check
 * Return: the value of a bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int result = 0;

	if (sizeof(n) * 8 < index)
		return (-1);
	res = (n >> index) & 1;
	return (result);
}
