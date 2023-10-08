#include "main.h"
/**
 * *string_nconcat - function that concatenates two strings
 * @s1: pointer
 * @s2: pointer
 * @n: integer
 * Return: pointer to string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int si1, si2;
	unsigned int i, j;
	char *x;

	for (si1 = 0; s1[si1] != '\0'; si1++)
		;
	for (si2 = 0; s2[si2] != '\0'; si2++)
		;

	if (n < si2)
		x = malloc(sizeof(char) * (si1 + n + 1));
	else
		x = malloc(sizeof(char) * (si1 + si2 + 1));
	if (x == NULL)
		return (NULL);

	for (i = 0; i < si1; i++)
		x[i] = s1[i];
	for (j = 0; j < n; j++)
	{
		x[i] = s2[j];
	i++;

	}
	x[i] = '\0';
	return (x);

}
