#include "main.h"

/**
 * _isdigit - prints digit
 *
 * Return: givee a value 1 if success and 0 if not
 * @c: variable or function parameter
 */

int _isdigit(int c)

{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

