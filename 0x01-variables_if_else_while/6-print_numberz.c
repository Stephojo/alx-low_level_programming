#include <stdio.h>

/**
 * main - starting point
 *
 * Return: gives 0 if successful
 */

int main(void)

{
	int a = 0;

	while
		(a < 10)
		{
			putchar((a % 10) + '0');
			a++;
		}
	putchar('\n');
	return (0);
}

