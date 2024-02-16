#include "main.h"
#include <stdio.h>

/**
 * create_file - This creates a file
 * @filename: the filename
 * @text_content: the content written in the file
 * Return: 1 if its successful. -1 if it fails
 */
int create_file(const char *filename, char *text_content)
{
	int fdr;
	int nwletters;
	int rwrt;

	if (!filename)
		return (-1);

	fdr = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fdr == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (nwletters = 0; text_content[nwletters]; nwletters++)
		;

	rwrt = write(fdr, text_content, nwletters);

	if (rwrt == -1)
		return (-1);

	close(fdr);

	return (1);
}
