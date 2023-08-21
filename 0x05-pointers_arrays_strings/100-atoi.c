#include "main.h"
/**
 * _atoi - convert a string to an integer.
 * @s: string
 *
 * Return: 0
 */
int _atoi(char *s)
{
	int flag;
	int i;
	int total = 0;

	i = 0;
	while(s[i])
	{
		if (s[i] == '-' || s[i] == '+')
		{
			flag = (s[i] == '-') ? -1 : 1;
		}
		else if (s[i] >= '0' && s[i] <= '9')
		{
			total = total * 10 + (s[i] - '0');
		}
		else
			i++;
	}
	return (total * flag);
}
