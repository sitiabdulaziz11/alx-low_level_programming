#include "main.h"
/**
 * _sqrt_recursion - function that returns square root of a number.
 * @n: value
 * @num: value
 * Return: value
 */
int sqrt_num(int n, int num);

int _sqrt_recursion(int n)
{
	return (sqrt_num(n, 0));
}
/**
 * sqrt_num - return square root of number.
 * @n: number
 * @num: value
 *
 * Return: num
 */
int sqrt_num(int n, int num)
{
	if (num * num == n)
		return (num);
	else if (num * num > n)
		return (-1);
	else
		return (sqrt_num(n, num + 1));
