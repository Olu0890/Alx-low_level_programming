#include "main.h"

/**
 * print_rev - print a string in reverse
 * @str: strin
 *
 * Return: 0
 */

void print_rev(char *str)
{
	int longi = 0;
	int o;

	while (*str != '\0')
	{
		longi++;
		str++;
	}
	str--;
	for (o = longi; o > 0; o--)
	{
		_putchar(*str);
		str--;
	}
	_putchar('\n');
}
