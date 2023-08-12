#include <stdlib.h>
#include "main.h"

/**
 * *array_range - creates an array of integers
 * @min: minimum range of values stored
 * @max: maximum range of values stored and number of elements
 *
 * Return: pointer to the new array
 */
int *array_range(int min, int max)
{
	int *ptr;
	int p, siz;

	if (min > max)
		return (NULL);

	siz = max - min + 1;

	ptr = malloc(sizeof(int) * siz);

	if (ptr == NULL)
		return (NULL);

	for (p = 0; min <= max; p++)
		ptr[p] = min++;

	return (ptr);
}
