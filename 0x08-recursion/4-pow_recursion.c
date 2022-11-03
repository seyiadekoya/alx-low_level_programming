#include "main.h"
/**
* _pow_recursion - prints the value of a number raised to a power
* @x: base number
* @y: power integer
*
* Return: the value of the x raised to the power of y
*/
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * (_pow_recursion(x, y - 1)));
}
