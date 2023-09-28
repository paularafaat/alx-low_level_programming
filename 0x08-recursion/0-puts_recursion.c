#include "main.h"
/**
 * _puts_recursion - function like puts();
 * @s: pointer to string
 * Return: void
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}

}
