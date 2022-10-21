#include <stdio.h>
/**
* main - Entry point
*
* 102-print_comb5.c prints unique combinations
* of 2 by 2 digits
* Return: 0 Always success
*/
int main(void)
{
	int j, k;

	for (j = 0; j <= 99; j++)
	{
		for (k = j + 1; k <= 99; k++)
		{
			putchar(j / 10 + '0');
			putchar(j % 10 + '0');
			putchar(' ');
			putchar(k / 10 + '0');
			putchar(k % 10 + '0');
			if (!(j == 98 && k == 99))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
