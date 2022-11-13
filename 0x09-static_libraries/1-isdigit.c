#include "main.h"
/**
* _isdigit - checks for a digit though 0 - 9
* @c: parameter to be checked
*
* Return: 0 if c is a digit, else returns 1.
*/
int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
	{
		return (1);
	}
	else
		return (0);
}
