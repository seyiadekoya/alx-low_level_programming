#include <stdio.h>
#include "main.h"

/**
* main - This is a function to print out its name
*
* @argc: parameter for arguement count
* @argv: parameter for an array arguement vector
* Return: 0 for success
*/
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
