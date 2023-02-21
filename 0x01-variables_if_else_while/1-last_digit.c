#include <stdio.h>

/**
 * main - Entry point
 *
 * description:'last digit of the number stored'
 *
 * return: Always 0
 */

int main(void)
{
	int n;
	int m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */

	m = n % 10;

	if (n % 10 > 5)
	{
		printf("last digit of %d is %d and is greater than 5", n, m);
	} else if (n % 10 == 0)
	{
		printf("last digit of %d is %d and is 0", n, m);
	} else if (m < 6 && m != 0)
	{
		printf("last digit of %d is %d and is less than 6 and not 0", n, m);
	}

	printf("\n");

	return (0);
}
