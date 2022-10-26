#include "main.h"
#include "2-strlen.c"
/**
* print_rev - prints the reversal of a string
* _strlen: function to get lenght of a string
*
* @s: String to be reversed
*
* Return: void
*/
void print_rev(char *s)
{
	int i;

	for (i = _strlen(s) - 1; i >= 0; i--)
	{
		_putchar(*(s + i));
	}
	_putchar('\n');
}
