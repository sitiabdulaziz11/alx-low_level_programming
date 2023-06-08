#include "main.h"
/**
 * is_prime_number - To know wether function is prime or not.
 * @n: number
 * @index: index
 * Return: value
 */
int prime_num(int n, int index);

int is_prime_number(int n)
{
	return (prime_num(n, 2));
}

/**
 * prime_num - to get prime number.
 * @index: index
 * @n: number
 * Return: value
 */

int prime_num(int n, int index)
{
	if (n <= 1 || n % index == 0)
		return (0);
	else if (n >= index * index)
		return (prime_num(n, index + 1));
	else
		return (1);
}
