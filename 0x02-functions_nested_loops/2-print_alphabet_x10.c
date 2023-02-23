#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the lowercase alphabet, new line
 *
 */

void print_alphabet_x10(void)
{
	int l;
	int e;

	for (l = 1; l <= 9; l++)
	{
		for (e = 'a'; e <= 'z'; e++)
			_putchar(e);
	}

		_putchar('\n');
}
