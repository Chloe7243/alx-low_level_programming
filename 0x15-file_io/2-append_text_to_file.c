#include "main.h"

/**
 * append_text_to_file - appends text to file
 * @filename: name of the file to create
 * @text_content: text to write in the file
 *
 * Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fildes, w_val;
	int size = text_content == NULL ? 0 : strlen(text_content);

	if (!filename)
		return (-1);

	fildes = open(filename, O_WRONLY | O_APPEND);
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
