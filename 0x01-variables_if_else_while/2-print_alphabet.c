#include <stdio.h>

/**
 * main - Entry point
 *
 * deacription: 'prints lowercase alphabet and a newline'
 *
 * Return: Always 0 (Success)
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
