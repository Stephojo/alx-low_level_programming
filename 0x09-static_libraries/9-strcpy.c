#include "main.h"

/**
 * _strcpy - copy string
 * @dest: location
 * @src: string to be copied
 * Return: a string
 */

char *_strcpy(char *dest, char *src)
{
	int len = 0;

	while (*(src + len) != '\0')
	{
		*(dest + len) = *(src + len);
		len++;
	}

	*(dest + len) = '\0';
	return (dest);
}
