#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 *
 * @filename: file name
 * @letters: number of letters
 * Return: int
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fildes;
	char *buf;
	ssize_t r_val, w_val;

	if (filename == NULL)
		return (0);

	fildes = open(filename, O_RDONLY);
	if (fildes < 0)
		return (0);

	buf = malloc(letters + 1);
	if (buf == NULL)
	{
		close(fildes);
		return (0);
	}

	r_val = read(fildes, buf, letters);
	if (r_val < 0)
		return (help_fnc(buf, fildes));

	w_val = write(STDOUT_FILENO, buf, r_val);
	if (w_val != r_val)
		return (help_fnc(buf, fildes));
	close(fildes);
	free(buf);

	return (w_val);

}

/**
 * help_fnc - ...
 *
 * @buffer: ...
 * @fildes: ...
 * Return: int
 */

int help_fnc(char *buffer, int fildes)
{
	close(fildes);
	free(buffer);
	return (0);
}
