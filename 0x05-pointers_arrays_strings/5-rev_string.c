#include "main.h"
#include "2-strlen.c"
/**
* rev_string - function that reverses a string
* _strlen: function to get lenght of string
*
* @s: string to be reversed
*
* Return: void
*/
void rev_string(char *s)
{
	int i;
	char temp;

	for (i = 0; i < _strlen(s) / 2; i++)
	{
		temp = s[_strlen(s) - i - 1];
		s[_strlen(s) - i - 1] = s[i];
		s[i] = temp;
	}
}
