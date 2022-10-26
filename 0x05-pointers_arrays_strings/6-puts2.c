#include "main.h"

/**
 * puts2 - prints characters of strings
 * @str: function parameter
 */

void puts2(char *str)
{
	int i = 0;

	for (; str[i] != '\0'; i + 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
