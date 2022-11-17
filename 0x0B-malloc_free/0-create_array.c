#include <stdlib.h>
#include "main.h"
/**
* create_array - creates an array of chars & initializes a specific char.
* @size: size of the char
* @c: character to be filled
*
* Return: A pointer to the char array or NULL if false
*/
char *create_array(unsigned int size, char c)
{
	char *ptrArray;
	unsigned int count;

	if (size == 0)
		return (NULL);
	ptrArray = malloc(size * sizeof(char));
	if (ptrArray != NULL)
	{
		for (count = 0; count < size; count++)
		{
			ptrArray[count] = c;
		}
	}
	else
		return (NULL);
	return (ptrArray);
}
