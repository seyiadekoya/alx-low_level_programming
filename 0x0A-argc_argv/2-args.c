#include <stdio.h>
#include "main.h"
/**
* main - prints all arguments passed to it
*
* @argc: parameter for argument count
* @argv: parameter for an array argument
* Return: 0 if successful
*/
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
