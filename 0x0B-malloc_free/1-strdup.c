#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
	char *g;
	int p, k = 0;

	if (str == NULL)
		return (NULL);
	p = 0;
	while (str[p] != '\0')
		p++;

	g = malloc(sizeof(char) * (p + 1));

	if (g == NULL)
		return (NULL);

	for (k = 0; str[k]; k++)
		g[k] = str[k];

	return (g);
}

