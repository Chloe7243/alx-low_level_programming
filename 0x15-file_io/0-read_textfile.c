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
	FILE *fp;
	char *buf;
	ssize_t r_val, w_val;

	if (filename == NULL)
		return (0);

	fp = fopen(filename, "r");
	if (fp == NULL)
		return (0);

	buf = malloc(letters + 1);
	if (buf == NULL)
	{
		fclose(fp);
		return (0);
	}

	r_val = fread(buf, sizeof(char), letters, fp);
	if (r_val < 0)
		return (help_fnc(buf, fp));

	w_val = fwrite(buf, sizeof(char), r_val, STDOUT_FILENO);
	if (w_val != r_val)
		return (help_fnc(buf, fp));
	fclose(fp);
	free(buf);

	return (w_val);

}

/**
 * help_fnc - ...
 *
 * @buffer: ...
 * @file_ptr: ...
 * Return: int
 */

int help_fnc(char *buffer, FILE *file_ptr)
{
	fclose(file_ptr);
	free(buffer);
	return (0);
}
