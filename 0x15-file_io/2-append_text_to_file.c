#include "main.h"
#include <stdio.h>

/**
 * append_text_to_file - This appends text at the end of a file
 * @filename: the filename
 * @text_content: the added content
 * Return: 1 if the file exists and -1 if the fails or does not exist.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fdr;
	int nwletters;
	int rwrt;

	if (!filename)
		return (-1);

	fdr = open(filename, O_WRONLY | O_APPEND);

	if (fdr == -1)
		return (-1);

	if (text_content)
	{
		for (nwletters = 0; text_content[nwletters]; nwletters++)
			;

		rwrt = write(fdr, text_content, nwletters);

		if (rwrt == -1)
			return (-1);
	}

	close(fdr);

	return (1);
}
