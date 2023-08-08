#include "main.h"

/**
 * main - entry point.
 * @ac: ac
 * @av: av
 *
 * Return: 0
 */

int main(int ac, char *av[])
{

	if (ac != 3)
		displayUsageError(av[0]);

	copyFile(av[1], av[2]);

	return (0);
}
/**
 * displayUsageError - display error.
 * @pname: programname.
 */
void displayUsageError(const char *pname)
{

	dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n", pname);
	exit(97);
}
/**
 * displayReadError - display read error.
 * @fname: file name.
 */
void displayReadError(const char *fname)
{

	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", fname);
	exit(98);
}
/**
 * displayWriteError - error
 * @fname: fn
 */
void displayWriteError(const char *fname)
{

	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", fname);
	exit(99);
}

/**
 * copyFile - copy file.
 * @from:fr
 * @to: to
 */
void copyFile(const char *from, const char *to)
{
	int fdfrom, fdto;
	ssize_t bytesRead, bytesWritten;
	char buffer[BUFFER_SIZE];

	fdfrom = open(from, O_RDONLY);
	if (fdfrom == -1)
		displayReadError(from);

	fdto = open(to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fdto == -1)
	{
		close(fdfrom);
		displayWriteError(to);
	}

	while ((bytesRead = read(fdfrom, buffer, BUFFER_SIZE)) > 0)
	{
		bytesWritten = write(fdto, buffer, bytesRead);
		if (bytesWritten == -1 || bytesWritten != bytesRead)
		{
			close(fdfrom);
			close(fdto);
			displayWriteError(to);
		}
	}

	if (bytesRead == -1)
	{
		close(fdfrom);
		close(fdto);
		displayReadError(from);
	}

	if (close(fdfrom) == -1 || close(fdto) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fdfrom);
		exit(100);
	}
}
