#include <stdio.h>

/**
 * main - the starting point
 *
 * Return: gives a value 0 (success)
 */

int main(void)
{
	char a = 'a';
	char A = 'A';

	while
		(a <= 'z')
		{
			putchar(a);
			a++;
		}
	while
		(A <= 'Z')
		{
			putchar(A);
			A++;
		}
	putchar('\n');
	return (0);
}

