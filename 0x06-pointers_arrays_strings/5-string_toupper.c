#include "main.h"

/**
 * string_toupper - Turns strings to uppercase
 * @p: function parameter (pointer)
 * Return: string
 */

char *string_toupper(char *p)
{
	int i = 0;

	while (p[i])
	{
		if (p[i] >= 'a' && p[i] <= 'z')
		{
			p[i] = p[i] - 32;
		}
		i++;
	}
	return (p);
}
