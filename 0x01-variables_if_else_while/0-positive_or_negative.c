#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - A program to generate a random number
 * Return : 0 (successul)
 */
int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if(n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else if(n < 0)
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
