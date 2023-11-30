#include "main.h"
/**
 * read_textfile - fun to read text % prints it to POSIX stdo
 * @filename: file pointer
 * @letters: number of letters to read
 * Return: number of letters readed & printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fileDescriptor;
	char *buf;
	ssize_t bytesR, bytesW;

	if (filename == NULL)
		return (0);
	fileDescriptor = open(filename, O_RDONLY);
	if (fileDescriptor == -1)
		return (0);
	buf = malloc(letters);
	if (buf == NULL)
	{
		close(fileDescriptor);
		return (0);
	}
	bytesR = read(fileDescriptor, buf, letters);
	if (bytesR == -1)
	{
		free(buf);
		close(fileDescriptor);
		return (0);
	}
	bytesW = write(STDOUT_FILENO, buf, bytesR);
	free(buf);
	close(fileDescriptor);
	return ((bytesW == bytesR) ? bytesW : 0);

}

