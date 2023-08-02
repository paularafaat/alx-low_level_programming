#include "main.c"
/**
 * _strlen_recursion - Returns the length of a string.
 * @s: The string to be measured.
 *
 * Return: The length of the string.
 */
int _strlen_recursion(char *s)
{
	int str = 0;

	if (*s != '\0')
	{
		str += _strlen_recursion(s + 1) + 1;
	}
	return (str);
}
