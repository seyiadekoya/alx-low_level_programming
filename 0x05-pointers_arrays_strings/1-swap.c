#include "main.h"
/**
* swap_int - swaps the values of 2 integers.
* @a: first parameter
* @b: second parameter
*
* Returns: void
*/
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
