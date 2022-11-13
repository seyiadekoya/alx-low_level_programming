#include "main.h"
#include <string.h>
/**
* _strcmp - compares two strings
*
* @s1: first string to be compared
* @s2: second string to be compared
*
* Return: 0 if equal. and ASCII value difference when different
*/
int _strcmp(char *s1, char *s2)
{
	int a = strlen(s1);
	int b = strlen(s2);
	int bigger;

	if (a < b)
	{
		bigger = b;
	}
	else if (a > b)
	{
		bigger = a;
	}
	else
	{
		bigger = a;
	}
	for (a = 0; a < bigger; a++)
	{
		if (s1[a] == s2[a])
		{
		}
		else
		{
			return (s1[a] - s2[a]);
		}
	}
	return (0);
}
