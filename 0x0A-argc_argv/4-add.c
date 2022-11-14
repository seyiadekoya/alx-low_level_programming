#include <stdio.h>
#include <stdlib.h>
/**
* main - prints the addition of arguments
*
* @argc: parameter for argument count
* @argv: parameter for an array argument
* Return: 0 if successful
*/
int main(int argc, char *argv[])
{
	int result = 0, i, j, k, num;

	for (i = 1; i < argc; i++)
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] > '9' || argv[i][j] < '0')
			{
				printf("Error\n");
				return (1);
			}
		}
	for (k = 1; k < argc; k++)
	{
		num = atoi(argv[k]);
		result += num;
	}
	printf("%d\n", result);
	return (0);
}
