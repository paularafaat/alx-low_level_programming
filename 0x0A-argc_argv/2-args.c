#include <stdio.h>
/**
 * main - program prints all arguments passed
 * @argc: int
 * @argv: list
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
