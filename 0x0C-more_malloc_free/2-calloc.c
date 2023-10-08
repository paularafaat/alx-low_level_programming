#include "main.h"

/**
 * _memset - set memory wiht constan byte
 * @z: pointer
 * @p: string
 * @c: int
 * Return: nothing
 */
char *_memset(char *z, char p, unsigned int c)
{
	char *ptr = z;

	while (c--)
		*z++ = p;
	return (ptr);
}



/**
 * *_calloc - function that allocates memory for array
 * @nmemb: integer
 * @size: the size of array
 * Return: nothing
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *x;

	if (size == 0 || nmemb == 0)
		return (NULL);
	x = malloc(size * nmemb);
	if (x == 0)
	return (NULL);

	_memset(x, 0, size * nmemb);
	return (x);
}
