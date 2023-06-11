#include <stdio.h>
#include <stdlib.h>
/**
 * main - a program that multiplies two numbers.
 * @argv: char
 * @argc: int
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	int s;
	int mult = 1;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		for (s = 1; s < argc; s++)
		{
			mult *= atoi(argv[s]);
		}
		printf("%d\n", mult);
	}
	return (0);
}
