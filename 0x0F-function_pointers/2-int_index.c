#include "function_pointers.h"
/**
* int_index - This function searches for an integer and returns the index on
* which the integer element is found.
* @array: array that would searched.
* @size: the number of elements in the array.
* @cmp: pointer to the function to be used to compare
* Return: index if true and -1 if false.
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int index, result;

	if ((size <= 0) || (array == NULL)  || (cmp == NULL))
		return (-1);
	for (index = 0; index < size; index++)
	{
		result = cmp(array[index]);
		if (result == 1)
			return (index);
	}
	return (-1);
}
