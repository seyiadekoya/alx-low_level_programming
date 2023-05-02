#include "function_pointers.h"
/**
* array_iterator - is a function executes a function given as a parameter
* on each element of an array.
* @array: is the name of the array passed.
* @size: is the size of the array.
* @action: is a pointer to the function passed.
*
* Return: void.
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL || size == 0)
		return;
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
