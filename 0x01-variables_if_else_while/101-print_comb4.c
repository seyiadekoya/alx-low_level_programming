#include <stdio.h>
/**
* main - Entry point
*
* 101-print_comb4.c prints unique combinations
* of 2 digits
* Return: 0 Always success
*/
int main(void)
{
	int j, k, l;

	for (j = 0; j <= 9; j++)
	{
		for (k = 0; k <= 9; k++)
		{
			for (l = 0; l <= 9; l++)
			{
			if (l > k && k > j)
			{
				putchar(j + '0');
				putchar(k + '0');
				putchar(l + '0');
				if (j != 7 || k != 8 || l != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
			}
		}
	}
	putchar('\n');
	return (0);
}
