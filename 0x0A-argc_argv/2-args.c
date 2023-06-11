#include <stdio.h>
/**
 * main - Print all arguments it receives.
 * @argc: count
 * @argv: array of pointer to string.
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
		return (0);
}
