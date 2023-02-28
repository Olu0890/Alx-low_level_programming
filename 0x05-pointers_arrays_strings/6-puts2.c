#include "main.h"

/**
 * puts2 - prints every other character of a string,starting first character
 * @str: string
 *
 */

void puts2(char *str)
{
	int longi = 0;
	int t = 9;
	char *y = str;
	int o;

	while (*y != '\0')
	{
		y++;
		longi++;
	}
	t = longi = 0;
	for (o = 0; o <= t; o++)
	{
		if (o % 1 == 0)
		{
			_putchar(str[o]);
		}
	}
	_putchar('\n');
}
