#include <stdio.h>

/**
 * main - print the the program name
 * @argc: function argument
 * @argv: functuion argument
 *
 * Return: Gives 0 if success
 */

int main(int argc, char *argv[])
{
	if (argc == 1)
	{
		printf("%s\n", argv[argc - 1]);
	}
	return (0);
}

