#include "main.h"
#include "6-abs.c"
/**
* print_last_digit - Main function
* _abs - gets the absolute value for a number
*
* @n: variable for number to produce last digit
*
*Return: 0 if true
*/
int print_last_digit(int n)
{
	_putchar(_abs(n % 10) + '0');
		return (_abs(n % 10));
}
