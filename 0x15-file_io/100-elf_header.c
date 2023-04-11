#include "main.h"

int main(int ac, char **av)
{
	char *file, str[11];
	int fd;

	if (ac != 2)
	{
		dprintf(STDERR_FILENO, "Usage: elf_header elf_filename\n");
		return (98);
	}

	file = av[1];
	fd = open(file, O_RDONLY);
	read(fd, str, 10);
	printf("%s\n", str);
	close(fd);

	return(0);
}
