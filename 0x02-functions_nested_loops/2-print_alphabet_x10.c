#include "main.h"

/**
* print_alphabet_x10 - This prints the alphabets through
*_putchar in lowercases 10 times.
*
* Return: void
*/
void print_alphabet_x10(void)
{
	int i;
	int n;

	for (n = 1; n <= 10; n++)
	{
		for (i = 'a'; i <= 'z'; i++)
		_putchar(i);
		_putchar('\n');
	}
}
