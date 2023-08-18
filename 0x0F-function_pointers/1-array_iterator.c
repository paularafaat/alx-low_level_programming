#include "function_pointers.h"

/**
 * array_iterator - prints each array
 * @array: array
 * @size: how many elem to print
 * @action: pointer
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int p;

	if (array == NULL || action == NULL)
		return;

	for (p = 0; p < size; p++)
	{
		action(array[p]);
	}
}
