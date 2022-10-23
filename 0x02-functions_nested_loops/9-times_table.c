#include "main.h"
/**
* times_table - returns the 9 times table
*
* Return: always 0
*/
void times_table(void)
{
	int a, b;
	int result = 9;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			result = a * b;
			if (b == 0)
				_putchar('0');
			else if (result <= 9)
			{
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
			_putchar(result + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar((result / 10) + '0');
				_putchar((result % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
