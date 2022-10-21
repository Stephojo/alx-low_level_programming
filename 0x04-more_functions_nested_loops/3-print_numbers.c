#include "main.h"

/**
 * print_numbers - prints number from 0 to 9
 * Return: gives o vaule ifsuccess
 */

void print_numbers(void)

{
	int n = 0;

	while (n < 10)
	{
		_putchar((n % 10) + '0');
		n++;
	}
	 _putchar('\n');

