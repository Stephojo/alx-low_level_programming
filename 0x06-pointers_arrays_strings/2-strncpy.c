#include "main.h"

/**
 * _strncpy - copy string
 * @dest: parameter1
 * @src: parameter2
 * @n: parameter3
 * Return: string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
