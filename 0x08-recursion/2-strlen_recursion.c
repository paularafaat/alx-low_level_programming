#include "main.h"
/**
 * _strlen_recursion - functin to return the lenth of string
 * @s: pointer to string
 * Return: 0
 */
int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s)
	{
		i++;
		i += _strlen_recursion(s + 1);
	}
	return (i);
}
