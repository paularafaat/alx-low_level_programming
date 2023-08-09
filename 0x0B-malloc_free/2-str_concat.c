#include "main.h"
#include <stdlib.h>
/**
 * str_concat - get ends of input and add together for size
 * @s1: input one to concat
 * @s2: input two to concat
 * Return: c of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char *c;
	int p, ci;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	p = ci = 0;
	while (s1[p] != '\0')
		p++;
	while (s2[ci] != '\0')
		ci++;
	c = malloc(sizeof(char) * (p + ci + 1));

	if (c == NULL)
		return (NULL);
	p = ci = 0;
	while (s1[p] != '\0')
	{
		c[p] = s1[p];
		p++;
	}

	while (s2[ci] != '\0')
	{
		c[p] = s2[ci];
		p++, ci++;
	}
	conct[p] = '\0';
	return (c);
}
