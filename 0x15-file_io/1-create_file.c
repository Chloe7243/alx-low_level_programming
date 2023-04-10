#include "main.h"
#include <fcntl.h>
#include <stdlib.h>
#include <string.h>

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 *
 * @filename: file name
 * @letters: number of letters
 * Return: int
 */

int create_file(const char *filename, char *text_content)
{
	FILE *fp;
	int size = strlen(text_content);
	ssize_t w_val;

	if (filename == NULL)
		return (-1);

	fp = fopen(filename, "w+");
	if (fp)

		if (fp == NULL)
			return (-1);

	w_val = fwrite(text_content, sizeof(char), size, fp);
	if (w_val != size)
	{
		fclose(fp);
		return (-1);
	}

	fclose(fp);

	chmod(filename, S_IRUSR | S_IWUSR);
	return (1);
}
