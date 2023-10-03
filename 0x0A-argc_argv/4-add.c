#include <stdio.h>
/**
 * main - program to adds positive nums
 * @argc: int
 * @argv: list
 * Return: 0 on success and 1 on fail
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	int i;

	if (argc == 0)
		return (0);
	for (i = 1; i < argc; i++)
	{
		if (i < '0' || i > '9')
		{
			return (printf("Error\n", 1));
		}
	}
		sum += atoi(argv[i];

	printf("%d\n", sum);
	return (0);
}
