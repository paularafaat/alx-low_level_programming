#include "main.h"
#include <string.h>
/**
 * *string_nconcat - function that concatenates two strings
 * @s1: pointer
 * @s2: pointer
 * @n: integer
 * Return: pointer to string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int si1 = strlen(s1);
	int i, j;
	char *x;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	x = malloc(si1 + n + 1);
	if (x == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		x[i] = s1[i];
	for (j = 0; j < n; j++)
	{
		x[i] = s2[j];
	i++;

	}
	x[i] = '\0';
	return (x);

}
