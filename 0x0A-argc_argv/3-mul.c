#include <stdio.h>
#include <stdlib.h>
/**
* main - prints the multiplication of 2 arguments
*
* @argc: parameter for argument count
* @argv: parameter for an array argument
* Return: 0 if successful
*/
int main(int argc, char *argv[])
{
	int result, num1, num2;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	result = num1 * num2;

	printf("%d\n", result);
	return (0);
}
