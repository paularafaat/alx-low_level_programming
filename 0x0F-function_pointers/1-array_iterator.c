#include "function_pointers.h"
/**
 * array_iterator - function that executes a function given
 * @array: int array
 * @size: size of array
 * @action: pointer function
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int *last = array + size - 1;

	if (array == NULL)
		return;
	if (size == NULL)
		return;
	if (action == NULL)
		return;
	while (array <= last)
		action(*array++);
}
