#include <stdio.h>
/**
* main - Entry point
*
* 100-print_comb3.c prints unique combinations
* of 2 digits
* Return: 0 Always success
*/
int main(void)
{
	int j, k;

	for (j = 0; j <= 9; j++)
	{
		for (k = 0; k <= 9; k++)
		{
			if (k > j)
			{
				putchar(j + '0');
				putchar(k + '0');
				if (j != 8 || k != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
