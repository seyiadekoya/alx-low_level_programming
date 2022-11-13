#include "main.h"

/**
* _strpbrk - searches a string for any of a set of bytes
*  @s: string to check
*  @accept: string to check
*
*  Return: pointer to byte in s, or NULL
*/
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(accept + j) == *(s + i))
			{
				return (s + i);
			}
		}
	}
	return ('\0');
}
