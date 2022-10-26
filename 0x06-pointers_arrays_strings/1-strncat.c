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
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (j < n && src[j] !=  '\0')
	{
		dest[j] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
