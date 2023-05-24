#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Print natural number to 98.
 * @v: comming number
 *
 */
void print_to_98(int v)
{
	int r;
	int k;

	if (v <= 98)
	{
		for (r = v; r <= 98; r++)
		{

			printf("%d", r);
			if (r != 98)
				printf(", ");
		}
	}
	else
	{
		for (k = v; k >= 98; k--)
		{

			printf("%d", k);
			if (k != 98)
				printf(", ");
		}
	}
	printf("\n");
}
