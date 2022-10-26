#include "main.h"
#include "2-strlen.c"
/**
* puts_half - prints the second half of a string
* _strlen: prints the lenght of a string
* @str: string to be used
*
* Returns: void
*/
void puts_half(char *str)
{
	int i;
	int n = 0;

	if (_strlen(str) % 2 != 0)
	{
		n += 1;
	}
	for (i = (_strlen(str) + n) / 2; i < _strlen(str); i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
