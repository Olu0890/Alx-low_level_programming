#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the lowercase alphabet, new line
 *
 */

void print_alphabet_x10(void)
{
	int l, e;

	for (l = 1; l <= 10; l++)
	{
		for (e = 'a'; e <= 'z'; e++)
		{
			_putchar(l);
		}
		_putchar('\n');
	}


}
