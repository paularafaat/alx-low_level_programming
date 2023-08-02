#include "main.c"
/**
 * _puts_recursion - function that print any thing you put with a new line
 * @s: input
 * return: always 0 (success)
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar('\n');
	}
}
