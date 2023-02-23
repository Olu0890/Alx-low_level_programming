#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: the alphabet
 *
 * Return: success 1
 */

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
