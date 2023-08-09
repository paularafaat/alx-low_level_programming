#include <stdio.h>
#include <stdlib.h>

/**
 * main - Print the name of the program
 * @argc: the number of arguments
 * @argv: array of pionters
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int p = 0;
	char *c;

	while (argc--)
	{
		for (c = argv[argc]; *c; c++)
			if (*c < '0' || *c > '9')
				return (printf("Error\n"), 1);
		p += atoi(argv[argc]);
	}
	printf("%d\n", p);
	return (0);
}
