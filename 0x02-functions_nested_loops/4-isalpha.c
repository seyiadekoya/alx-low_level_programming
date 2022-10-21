#include "main.h"
/**
*_isalpha - Main function
*
* @c: variable to be compared for alphabetic characters
*
*Return: 1 if true, and 0 if false
*/
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
