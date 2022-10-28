#include "main.h"
/**
* *cap_string - Capitalizes all words of a string
* @str: The string to be capitalized.
* Return: A pointer to the changed string.
*/
char *cap_string(char *str)
{
	char *ptr = str;
	int i, capitalize = 1;

	char word_sep[] = " \t\n,.!?\"{}()";

	/* capitalize is true, so all the first chars are capitalized */
	while (*str)
	{
		if (capitalize && *str >= 'a' && *str <= 'z')
		{
			*str = (*str - 'a') + 'A';
		}
		capitalize = 0;
		for (i = 0; i < 12; i++)
		{
			if (*str == word_sep[i])
				capitalize = 1;
		}
		str++;
	}
	return (ptr);
}
