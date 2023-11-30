#include "main.h"
/**
 * _strlen - Function to get the length of a string.
 * @c: Pointer to the string.
 * Return: The length of the string.
 */
int _strlen(char *c)
{
	int len = 0;

	if (!c)
		return (-1);
	while (*c)
	{
		len++;
		c++;
	}
	return (len);
}
/**
 * append_text_to_file - appending text to the end of file
 * @filename: file name
 * @text_content: the content to append
 * Return: 1 on success, -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, ws;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
	ws = write(fd, text_content, _strlen(text_content));
	if (ws == -1)
	{
		close(fd);
		return (-1);
	}
	}
	close(fd);
		return (1);

}
