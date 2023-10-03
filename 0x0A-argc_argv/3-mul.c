#include <stdio.h>
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
		x = argv[1] * argv[2];
		pritnf("%d\n", x);
	}
	else
	{
		pritnf("Error\n");
		return (1);
	}
	return (0);
}
