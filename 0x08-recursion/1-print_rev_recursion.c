#include "main.c"
/**
 * _print_rev_recursion - print str in revers
 *@s: the string
 *
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
