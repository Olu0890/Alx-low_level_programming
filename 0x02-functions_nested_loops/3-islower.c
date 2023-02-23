#include "main.h"

/**
 * _islower - check for lowercase charcter
 * @c: the character
 *
 * Return: on success 1
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}

	return (0);
}
