#include "main.h"
/**
 * create_file - Create a function that creates a file.
 * @filename: file name.
 * @text_content: pointer.
 *
 * Return: 1 | -1
 */
int create_file(const char *filename, char *text_content)
{
	int fd, wt, l;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		text_content = "";
	if (text_content != NULL)
	{
		l = 0;
		while (text_content[l])
		{
			l++;
		}
	}
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wt = write(fd, text_content, l);
	if (fd == -1 || wt == -1)
		return (-1);
	close(fd);
	return (1);
}
