#include "main.h"

/**
 * print_sign - print a sign of a number n
 *
 * @c: the number of tge sign to be printed
 *
 * Return: 1 if the number is greater than zero
 * 0 if the number is zero
 * -1 if the number is less than zero
 */

int print_sign(int c)
{
	if (c > 0)
	{
		_putchar('+');

		return (1);
	}
	else if (c == 0)
	{
		_putchar('0');

		return (0);
	}
	else
	{
		_putchar('-');

		return ('-');
	}
}
