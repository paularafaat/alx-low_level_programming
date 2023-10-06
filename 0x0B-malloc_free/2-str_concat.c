#include <main.h>
#include <string.h>
/**
 * char *str_concat - function that concatenates tow strings
 * @s1: string
 * @s2: string
 * Return: pointer to string
 */
char *str_concat(char *s1, char *s2)
{
	int size1, size2, i;
	char *x;

	if (s1 == 0)
		s1 = "\0";
	if (s2 == 0)
		s2 = "\0";

	size1 = strlen(s1);
	size2 = strlen(s2);

	x = malloc((size1 + size2) * sizeof(char) + 1);
	if (x == 0)
		return (0);
	for (i = 0; i <= size1 + size2; i++)
	{
		if (i < size1)
			x[i] = s1[i];
		else
			x[i] = s2[i - size1];
	}
	x[i] = '\0';
	return (x);
}
