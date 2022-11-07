#include "main.h"
/**
* print_line - draws a straight line in the terminal.
* @n: parameter to determine the length of the line
*
* Return: void
*/
void print_line(int n)
{
	int a = 0;

	while (a < n && n > 0)
	{
		_putchar('_');
		a++;
	}
	_putchar('\n');
}
