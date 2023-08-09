#include "main.h"
#include <stdlib.h>

/**
 * create_array - create array of size size and assign char c
 * @p: size of array
 * @c: char to assign
 * Description: create array of size size and assign char c
 * Return: pointer to array, NULL if fail
 *
 */
char *create_array(unsigned int p, char c)
{
	char *c = malloc(p);

	if (p == 0 || n == 0)
		return (0);

	for (p = 0; p < size; p++)
		str[p] = c;
	return (c);

}
