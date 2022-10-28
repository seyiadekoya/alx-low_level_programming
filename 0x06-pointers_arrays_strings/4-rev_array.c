#include "main.h"
/**
* reverse_array - reverses the array.
* @a: array to be reversed
* @n: the number of elements of the array
*
* Returns: void.
*/
void reverse_array(int *a, int n)
{
	int i, temp;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[(n - 1) - i];
		a[(n - 1) - i] = temp;
	}
}
