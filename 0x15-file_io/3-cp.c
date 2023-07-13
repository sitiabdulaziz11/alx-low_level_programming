#include "main.h"

/**
 * main - starting point.
 * @ac: argument count.
 * @argv: arguments
 *
 * Return: 0
 */
int main(int ac, char **argv)
{
	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s cp file_from file_to\n", argv[0]);
		exit(97);
	}
	copy_file(argv[1], argv[2]);

	exit(0);
}
/**
 * copy_file - function that copy one file to other.
 * @f_from: sourc file.
 * @f_to: destination fiie.
 *
 */
void copy_file(const char *f_from, const char *f_to)
{
	int fd_from, fd_to;
	ssize_t rdbyt, wtbyt;
	char arr[BU_SIZE];

	fd_from = open(f_from, O_RDONLY);
	if (!f_from || fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", f_from);
		exit(98);
	}
	fd_to = open(f_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		close(fd_from);
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", f_to);
		exit(99);
	}
	while ((rdbyt = read(fd_from, arr, BU_SIZE)) > 0)
	{
		wtbyt = write(fd_to, arr, rdbyt);
		if (wtbyt == -1 || wtbyt != rdbyt)
		{
			close(fd_from);
			close(fd_to);
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", f_to);
			exit(99);
		}
	}
	if (rdbyt == -1)
	{
		close(fd_from);
		close(fd_to);
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", f_from);
		exit(98);
	}
	if (close(fd_from) == -1 || close(fd_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error:Can't close fd %d\n", (fd_from == -1) ? fd_from : fd_to);
		exit(100);
	}
}
