#include "main.h"

/**
 * _puts - prints string
 * @str: takes pointer of character
 * @c: character c
 *
 * Return: Nothing
 */

void _puts(char *str)
{
	int i = 0;
	char c;

	while (c = *(str + i) != '\0')
	{
		_putchar(c);
		i++;
	}
	_putchar('\n');
}
