#include "main.h"
#include "2-strlen.c"
/**
* puts2 - prints every other character then a newline
* _strlen: prints the lenght of a string
* @str: string to be used
*
* Returns: void
*/
void puts2(char *str)
{
	int i;

	for (i = 0; i <= _strlen(str) - 1; i++)
	{
		if ((i % 2) == 0)
		{
			_putchar((str[i]));
		}
	}
	_putchar('\n');
}
