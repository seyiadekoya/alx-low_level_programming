#include "main.h"
/**
* print_times_table - times table function
* @n: integer to return
*/
void print_times_table(int n)
{
	int a, b;

	if (n <= 15 && n >= 0)
	{
		for (a = 0; a <= n; a++)
		{
			for (b = 0; b <= n; b++)
			{
				int prod = b * a;

				if (b == 0)
				{
					_putchar('0');
				} else if (prod <= 9)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar('0' + prod);
				} else if (prod > 99)
				{
					_putchar(',');
					_putchar(' ');
					_putchar('0' + (prod / 100));
					_putchar('0' + ((prod / 10) % 10));
					_putchar('0' + (prod % 10));
				} else
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar('0' + (prod / 10));
					_putchar('0' + (prod % 10));
				}
			}
			_putchar('\n');
		}
	}
}
