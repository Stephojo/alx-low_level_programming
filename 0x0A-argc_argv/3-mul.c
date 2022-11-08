#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints product of two numbers
 * @argc: function argument
 * @argv: function argument
 *
 * Return: give 0 if success or 1 for error
 */

int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
