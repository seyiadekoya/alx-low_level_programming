#include "main.h"
/**
*print_sign - Main function
*
* @n: variable where the number is stored
*
*Return: 1 if number is positive, and 0 if number is zero
* and returns -1 if number is negative
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
	return (0);
}
