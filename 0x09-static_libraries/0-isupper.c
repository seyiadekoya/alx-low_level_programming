#include "main.h"
/**
* _isupper - checks for an uppercase character
* @c: parameter to be checked.
*
* Return: 1 if uppercase, else it returns 0.
*/
int _isupper(int c)
{
	if ((c >= 65) && (c <= 90))
	{
		return (1);
	}
	else
		return (0);
}
