#include <stdio.h>
/**
 * main - To prints the number of arguments passed into it.
 * @argc: count
 * @argv: array of pointer to string
 * Return: 0
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
