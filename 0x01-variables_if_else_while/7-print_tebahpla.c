#include <stdio.h>

/**
 * main - starting point
 *
 * Return: gives 0 if successful
 */

int main(void)

{
	char d = 'z';

	while
		(d >= 'a')
		{
			putchar(d);
			d--;
		}
	putchar('\n');
	return (0);
}

