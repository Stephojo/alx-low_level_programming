#include "main.h"

/**
 * print_alphabet - function that prints lower case alphabet.
 */

void print_alphabet(void)
{
	char c = 'a';

	while
		(c <= 'z')
		{
			_putchar(c);
			c++;
		}
	_putchar('\n');
}

