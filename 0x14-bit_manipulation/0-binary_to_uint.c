#include "main.h"
#include <stdio.h>
/**
 * binary_to_uint - This converts a binary number to an int
 * @b: the number to be converted
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int len;
	unsigned int m = 0;
	unsigned int n = 1;
	int i;

	if (b == NULL)
		return (0);

	for (len = 0; b[len] != '\0'; len++)
		;
	for (i = len - 1; i >= 0; i--)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		if (b[i] == '1')
		{
			m += n;
		}
		n *= 2;
	}
	return (m);
}
