#include "main.h"

/**
 * _puts - prints string
 * @str: takes pointer of character
 *
 * Return: Nothing
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
