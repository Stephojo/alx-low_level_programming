#include "main.h"

/**
 * print_alphanet - prints lower case alphabets follow by a newline to stout.
 *
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

