#include "main.h"
#include <stdio.h>
/**
 * *string_nconcat - concatenates two strings
 * @s1: pointer to first string
 * @s2: pointer to socend string
 * @n: numbers of bytes
 *
 * Return: pointer to the resulting string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *P;
	unsigned int k, l, length1, length2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (length1 = 0; s1[length1] != '\0'; length1++)
		;
	for (length2 = 0; s2[length2] != '\0'; length2++)
		;

	p = malloc(length1 + n + 1);
	if (p == NULL)
	{
		return (NULL);
	}

	for (k = 0; s1[k] != '\0'; k++)
		p[k] = s1[k];

	for (l = 0; l < n; l++)
	{
		p[k] = s2[l];
		k++
	}

	p[k] = '\0';
	return (p);

}
