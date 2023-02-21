#include <stdio.h>

/**
 * main - entry point
 *
 * deacription: 'prints in lowercase'
 *
 * return: Alwsys 0
 */
int main(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}

	putchar('\n');

	return (0);
}
