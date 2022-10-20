#include "main.h"

/**
 *  print_alphabet_x10 - function that prints lower case alphabet 10 times.
 */

void print_alphabet_x10(void)

{
	int t = 0;

	while
		(t <= 9)
		{
			char c = 'a';

			while
				(c <= 'z')
				{
					_putchar(c);
					c++;
				}
			_putchar('\n');
			t++;
		}
}


