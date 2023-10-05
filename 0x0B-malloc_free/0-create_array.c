#include "main.h"
/**
 * char *create_array - function to creat an rray of chars
 * @size: size of the memory
 * @c: the address of memory to print
 * Return: pointer to array
 */
char *create_array(unsigned int size, char c)
{
	char *x = malloc(size);

	if (size == 0 || x == 0)
		return (0);
	while (size--)
		x[size] = c;

	return (x);

}
