#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - Entry point
*
* Return: 0 Always (Success)
*/
int main(void)
{
	int n, last_num;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_num = n % 10;

	if (n > 5 && last_num != 0)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, last_num);
	}
	else if (n < 6 && n != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last_num);
	}
	else
	{
		printf("Last digit of %d is %d and is 0\n", n, last_num);
	}
	return (0);
}
