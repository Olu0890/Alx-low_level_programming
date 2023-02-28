#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * rev_string - function that reverses a  string
 * @s: function character
 *
 * Return: nothing
 */

void rev_string(char *s)
{
	int i;
	int j;
	char t[1000];

	j = strlen(s);
	for (i = j; i > 0; i--)
	{
		t[j - i] = s[i - 1];
	}
	for (i = 0; i < j; i++)
	{
		s[i] = t[i];
	}
}
