#include <stdio.h>
#include <stdlib.h>
/**
 * main- print the sum of 2 numbers.
 * @argc:number 
 * @argv:pionter
 * return:0-success
 */
int main(int argc, char **argv)
{
	int i;
	if (argc == 3)
	{
		i = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", i);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
