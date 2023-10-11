#include "function_pointers.h"
/**
 * print_name - function to print name
 * @name: pointer to str
 * @f: pointer to functio
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL)
		return;

	if (f == NULL)
		return;
	f(name);
}
