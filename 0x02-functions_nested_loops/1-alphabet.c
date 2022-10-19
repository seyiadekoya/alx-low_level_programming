#include "main.h"

/**
* print_alphabet - This prints the alphabets through _putchar in lowercases
*
* Return: void
*/
void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
		_putchar(i);
	_putchar('\n');
}
