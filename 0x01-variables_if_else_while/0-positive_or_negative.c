#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* Function to show if a random number generated is positive or negative */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("The number %d generated is positive\n", n);
	}
	else if (n == 0)
	{
		printf("The number %d generated is Zero\n", n);
	}
	else
	{
		printf("The number %d generated is negative\n", n);
	}
	
	return(0);
}
