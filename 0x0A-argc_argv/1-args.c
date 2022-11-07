#include <stdio.h>

/**
 * main - print the number of command line argument passed
 * @argc: funtion argument
 * @argv: function argument
 *
 * Return: gives 0 if success
 */

int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
