#include <stdlib.h>
#include <time.h>
#include <stdio.h>


int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0) printf ("is negative %i/n" ,n );
	else if (n < 0) printf ("is positive %i/n",n);
	else (n == 0) printf("is zero %i/n" ,n);
	return (0);
}
