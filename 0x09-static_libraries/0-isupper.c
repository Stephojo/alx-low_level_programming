#include "main.h"
/**
 * _isupper - function that printd alphabet in uppercase.
 *
 * Return: gives a value of 1 if success.
 * @c: variable of int type.
 */

int _isupper(int c)

{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}

	else
	{
		return (0);
	}
}

