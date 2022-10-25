#include "main.h"

/**
 * _puts - print a string and a newline
 * @str: function parameter
 */

void _puts(char *str)
{
	while (*str != '\n')
	{
		_putchar(*str++);
	}
	_putchar('\n');
