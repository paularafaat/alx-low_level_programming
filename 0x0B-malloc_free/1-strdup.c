#include "main.h"
/**
 * char *_strdup - function to return a copy of string
 * @str: pointer to string
 * Return: string
 */
char *_strdup(char *str)
{
	int i;
	int size = 0;
	char *x;

	if (str == NULL)
		return (NULL);
	while (str[size] != '\0')
		size++;
	x = malloc(size * sizeof(*str) + 1);
	if (x == 0)
		return (NULL);

	else
	{
		for (i = 0; i < size; i++)
			x[i] = str[i];
	}

	return (x);

}
