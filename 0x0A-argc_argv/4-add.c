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

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		int l = 0;

		while (argv[i][j] != '\0')
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
			j++;
		}
		int num = atoi(argv[i]);

		sum += num;
	}


	printf("%d\n", sum);
	return (0);
}
