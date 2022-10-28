#include "main.h"

/**
 * leet - Encodes a string to 1337.
 * @a:  function parameter (string).
 * Return: returns a
 */

char *leet(char *a)
{

	int i;
	int j;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (i = 0; a[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (a[i] == s1[j])
			{
				a[i] = s2[j];
			}
		}
	}
	return (a);
}
