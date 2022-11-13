#include "main.h"
/**
* _strncat - concatenates two strings to the position of n
* @dest: the first string to be concatenated
* @src: the second string to be concatenated
* @n: number of characters the 2nd string would be cropped to
*
* Return: dest if successful
*/
char *_strncat(char *dest, char *src, int n)
{
	int a = 0, b = 0;

	while (dest[a] != '\0')
	{
		a++;
	}
	while ((src[b] != '\0') && (b < n))
	{
		dest[a] = src[b];
		b++;
		a++;
	}
	dest[a] = '\0';
	return (dest);
}
