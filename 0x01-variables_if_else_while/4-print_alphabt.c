#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'print the alphabet withoit q and e followed by a newline'
 *
 * Return: Always 0
 */

int main(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == 'e' || i == 'q')
			continue;
		putchar(i);
	}
	putchar('\n');

	return (0);
}
