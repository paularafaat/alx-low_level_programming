#include "main.h"
/**
 * *malloc_checked - function that allocates memoru using malloc
 * @b: integer
 * Return: nothing
 */
void *malloc_checked(unsigned int b)
{
	int *x;

	x = malloc(b);
	if (x == 0)
		exit(98);
	return (x);
}
