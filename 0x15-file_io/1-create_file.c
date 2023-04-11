#include "main.h"

/**
 * create_file - creates a file and fills it with text
 * @filename: name of the file to create
 * @text_content: text to write in the file
 *
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fildes, w_val, size = strlen(text_content);

	if (!filename)
		return (-1);

	fildes = creat(filename, 0600);
	if (fildes < 0)
		return (-1);

	if (text_content)
	{
		w_val = write(fildes, text_content, size);
		if (w_val != size)
			return (-1);
	}

	close(fildes);

	return (1);
}
