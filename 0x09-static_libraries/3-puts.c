#include "main.h"

/**
 * _puts - print a string and a newline
 * @str: function parameter
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
