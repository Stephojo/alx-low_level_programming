#include <stdio.h>

/**
 * main - starting point
 *
 * Return: gives a value 0 if success
 */

int main(void)

{
	int n = 0;

	while

		(n <= 9)
		{
			putchar((n	% 10) + '0');
			putchar(',');
			putchar(' ');
			n++;
		}
	putchar('\n');
	return (0);
}

