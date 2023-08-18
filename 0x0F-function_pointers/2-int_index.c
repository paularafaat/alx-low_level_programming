#include "function_pointers.h"

/**
 * int_index - return index place
 * @array: array
 * @size: size of elements
 * @cmp: pointer
 * Return: 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int p;

	if (array && size && cmp)

	for (p = 0; p < size; p++)
	{
		if (cmp(array[p]))
			return (p);
	}
	return (-1);
}
