#include "main.h"
/**
* _strlen - displays the length of a string
*
* @s: character variable for the string
*
* Return: count if successful
*/
int _strlen(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		s++;
		count++;
	}
	return (count);
}
