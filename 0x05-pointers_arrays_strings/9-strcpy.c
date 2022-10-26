#include "main.h"
#include "2-strlen.c"

/**
* _strcpy - copies the str from src to dest.
* @src: string to be copied
* @dest: copied str
*
* Return: returns char
*/
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; i <= _strlen(src); i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
