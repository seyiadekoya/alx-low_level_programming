#include <stdio.h>
#include "main.h"
/**
* main - prints the number of the arguments passed to it
*
* @argc: parameter for argument count
* @argv: parameter for an array argument
* Return: 0 if successful
*/
int main(int argc, char *argv[]__attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
