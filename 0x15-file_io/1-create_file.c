#include "main.h"
/**
 * create_file - fun to creat file
 * @filename: file name
 * @text_content: the content to write
 * Return: 0
 */
int create_file(const char *filename, char *text_content)
{
	int fd, Ws;

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (text_contnet != NULL)
	{
		Ws = write(fd, text_content, strlen(text_content));
	if (Ws == -1)
	{
		close(fd);
		return (-1);
	}
	}
	close(fd);
	return (1);

}
