#include "main.h"

/**
 * flip_bits - number of different bits between two numbers
 * @n: the first number
 * @m: the second number
 * Return: the number of bits that would need to be flipped
 * to get from one number to another.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff, check;
	unsigned int count, a;

	count = 0;
	check = 1;
	diff = n ^ m;
	for (a = 0; a < (sizeof(unsigned long int) * 8); a++)
	{
		if (check == (diff & check))
			count++;
		check <<= 1;
	}
	return (count);
}
