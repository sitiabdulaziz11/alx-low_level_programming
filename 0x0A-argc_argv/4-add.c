#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that adds positive numbers.
 * @argv: array of pointer to char
 * @argc: count
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int f = 1;
	int res = 0;

	if (argc > 1)
	{
		for (f = 1; f < argc; f++)
		{
			if (*argv[f] < '0' || *argv[f] > '9')
			{
				printf("Error\n");
				return (1);
			}
			else
			{
				res += atoi(argv[f]);

			}
		}
		printf("%d\n", res);
	}
	else
	{
		printf("0\n");
		return (0);
	}
	return (0);
}
