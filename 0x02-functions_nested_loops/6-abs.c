#include "main.h"
/**
* _abs - Main function
*
* @c: variable to be processed for an absolute value
*
*Return: c if true
*/
int _abs(int c)
{
	if (c < 0)
	{
		return ((c *= -1));
	}
	return (c);
}
