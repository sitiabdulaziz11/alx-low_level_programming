#include "main.h"
/**
 * append_text_to_file -  function that appends text at the end of a file.
 * @filename: the name of the file.
 * @text_content: string that add at the end of the file.
 *
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, i;

	if (!filename && text_content == NULL)
		return (-1);
	if (filename && text_content == NULL)
		return (1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	i = 0;
	while (text_content[i] != '\0')
	{
		i++;
	}
	if (write(fd, text_content, i) == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
