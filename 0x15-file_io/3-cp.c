#include "main.h"

/**
 * main - check the code
 *
 * @ac: ...
 * @av: ...
 * Return: Always 0.
 */

int main(int ac, char **av)
{
	const char *f_from, *f_to;
	char buf[1024];
	int fd, fd2, fc, fc2;
	ssize_t w_val, r_val;

	if (ac != 3)
		handle_error("Usage: cp file_from file_to\n", 97, "");

	f_from = av[1];
	f_to = av[2];
	fd = open(f_from, O_RDONLY);
	fd2 = creat(f_to, 0664);

	if (fd < 0)
		handle_error("Error: Can't read from file %s\n", 98, f_from);

	while ((r_val = read(fd, buf, 1024)) > 0)
	{
		if (fd2 < 0)
			handle_error("Can't write to %s\n", 99, f_to);
		w_val = write(fd2, buf, r_val);
		if (w_val != r_val)
			handle_error("Can't write to %s\n", 99, f_to);
	}

	if (r_val < 0)
		handle_error("Error: Can't read from file %s\n", 98, f_from);

	fc = close(fd);
	fc2 = close(fd2);

	if (fc != 0 || fc2 != 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", (fc != 0 ? fc : fc2));
		exit(100);
	}

	return (0);
}

/**
 * handle_error - handle errors
 *
 * @err_msg: ...
 * @status: ...
 * @fnc: ...
 * Return: e
 */

void handle_error(char *err_msg, int status, const char *fnc)
{
	char *str;

	str = malloc(1024);
	sprintf(str, err_msg, fnc);
	dprintf(STDERR_FILENO, "%s", str);
	free(str);
	exit(status);
}
