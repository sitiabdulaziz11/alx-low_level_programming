#include "main.h"
/**
 * read_textfile - function that reads a text file and print it.
 * @filename: name of file being read.
 * @letters: number of letters it should read and print.
 *
 * Return: actual number of letters it could read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd, wt, rd;
	char *arr;

	if (filename == NULL)
		return (0);
	fd = open("filename", O_RDONLY);
	if (fd == -1)
		return (0);
	arr = malloc(sizeof(char) * letters);
	if (arr == NULL)
	{
		close(fd);
		return (0);
	}
	rd = read(fd, arr, letters);
	if (rd == -1)
	{
		free(arr);
		close(fd);
		return (0);
	}
	wt = write(1, arr, rd);

	if (wt == -1 || (ssize_t)wt != rd)
	{
		free(arr);
		close(fd);
		return (0);
	}
	free(arr);
	close(fd);
	return (wt);
}

