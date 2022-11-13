#include "main.h"
/**
* _islower - Main function
*
* @ch: variable to be compared for lowercase characters
*
*Return: 1 if false, and 0 if true
*/
int _islower(int ch)
{
	if (ch >= 'a' && ch <= 'z')
	{
		return (1);
	}
	return (0);
}
