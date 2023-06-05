#include "main.h"
/**
 * _strspn - to get length of a prefix substring.
 * @s: pointer value
 * @accept: accepted value
 *
 * Return:lent
 */
unsigned int _strspn(char *s, char *accept)
{
	int g;
	int num;
	int flag = 1;

	num = 0;
	while (*s != '\0' && flag)
	{
		flag = 0;
		for (g = 0; accept[g] != '\0'; g++)
		{
			if (*s == accept[g])
			{
				num++;
				flag = 1;
				break;
			}
		}
		s++;
	}
	return (num);
}

