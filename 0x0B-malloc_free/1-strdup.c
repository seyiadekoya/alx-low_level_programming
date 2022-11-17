#include <stdlib.h>
#include "main.h"
#include <string.h>
/**
* _strdup - returns a pointer to a copied string in a new mem location
* @str: parameter for the string
*
* Return: pointer to new memory if successful or NULL if false.
*/
char *_strdup(char *str)
{
	char *ptrnew;
	int count, size;

	if (str == NULL)
	{
		return (NULL);
	}
	size = strlen(str);
	ptrnew = malloc((size * sizeof(char)) + 1);
	if (ptrnew == NULL)
	{
		return (NULL);
	}
	for (count = 0; str[count] != '\0'; count++)
	{
		ptrnew[count] = str[count];
	}
	return (ptrnew);
}
