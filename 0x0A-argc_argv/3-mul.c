#include <stdio.h>
#include <stdlib.h>
/**
 * main - program to multipilies tow nums
 * @argc: int
 * @argv: list
 * Return: 0 if success 1 if not
 */
int main(int argc, char *argv[])
{
	int x;

	if (argc == 3)
	{
		x = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", x);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
