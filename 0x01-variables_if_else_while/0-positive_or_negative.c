#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/*
 *main - entry piont
 *description: fales or true validation
 *return: 0 (success)
 */


int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("is negative %i/n", n);
	else if (n == 0)
		printf("is zero %i/n", n);
	else
		printf("is positive %i/n", n);
	return (0);
}
