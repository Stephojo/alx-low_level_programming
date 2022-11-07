#include <stdio.h>

/**
 * main - Prints all arguments including the first one
 * on a new line
 * @argc: function argument
 * @argv: funtion argument
 *
 * Return: give 0 if success
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i <= argc - 1; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
