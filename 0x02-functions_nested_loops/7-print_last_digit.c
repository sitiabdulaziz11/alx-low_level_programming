#include "main.h"

/**
 * print_last_digit - print last digit.
 * @b: recevie value
 *
 * Return: n
 */
int print_last_digit(int b)
{
	int n;

	n = b % 10;
	if (n < 0)
		n = n * -1;
	_putchar(n + '0');
	return (n);
}
