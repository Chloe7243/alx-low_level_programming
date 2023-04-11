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
	int fd, fd2, fc, fc2, w_val, r_val;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	f_from = av[1];
	f_to = av[2];
	fd = open(f_from, O_RDONLY);
	fd2 = creat(f_to, 0664);

	while ((r_val = read(fd, buf, 1024)) > 0)
	{
		w_val = write(fd2, buf, r_val);
		if (fd2 < 0 || w_val != r_val)
		{
			dprintf(STDERR_FILENO, "Can't write to %s\n", f_to);
			exit(99);
		}
	}

	if (fd < 0 || r_val != 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", f_from);
		exit(98);

	}

	fc = close(fd);
	fc2 = close(fd2);

	if (fc != 0 || fc2 != 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", (fc != 0 ? fc : fc2));
		exit(100);
	}

	return (0);
}
