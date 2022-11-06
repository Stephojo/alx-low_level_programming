#include "main.h"

/**
 * _strlen - returns length of string
 * @s: function parameter
 * Return: returns the length of string
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
