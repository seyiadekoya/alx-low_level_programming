#include "main.h"
/**
* _print_rev_recursion - Prints strings in reverse using recursion
* @s: String s
*/
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return;
	s++;
	_print_rev_recursion(s);
	s--;
	_putchar(*s);
}
