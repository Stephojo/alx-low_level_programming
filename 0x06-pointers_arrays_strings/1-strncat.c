#include "main.h"

/**
 * _strncat - joins strings with char
 * @dest: parameter1
 * @src: parameter2
 * @n: parameter3
 * Return: dest with additional char
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i++])
	{
		j++;
	}
	for (i = 0; src[i] && i < n; i++)
	{
		dest[j++] = src[i];
	}
	return (dest);
}
