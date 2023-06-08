#include "main.h"
/**
 * _puts_recursion - print string by recurtion.
 * @s: strings
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
