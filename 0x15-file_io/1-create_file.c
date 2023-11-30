#include "main.h"
/**
 * _strlen - to get the len of str
 * @c: pointer
 * Return: th lenth
 */
int _strlen(char *c)
{
	int len = 0;

	if (!c)
		return (0);
	while (*c)
	{
		len++;
		c++;
	}
	return (len);
}
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
	if (text_content != NULL)
	{
		Ws = write(fd, text_content, _strlen(text_content));
	if (Ws == -1)
	{
		close(fd);
		return (-1);
	}
	}
	close(fd);
	return (1);
}
