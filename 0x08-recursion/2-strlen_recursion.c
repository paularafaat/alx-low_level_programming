#include "main.h"
/**
 * _strlen_recursion - functin to return the lenth of string
 * @s: pointer to string
 * Return: 0
 */
int _strlen_recursion(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
	}
	return (i);
}
