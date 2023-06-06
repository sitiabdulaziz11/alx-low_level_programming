#include "main.h"
/**
 * cap_string - To capitalize begnning of words.
 * @st: value
 *
 * Return: st
 */
char *cap_string(char *st)
{
	int j;
	int cap = 1;

	j = 0;
	while (st[j] != '\0')
	{
		if (cap && st[j] >= 'a' && st[j] <= 'z')
		{
			st[j] -= 32;
		}
		if (st[j] == ' ' || st[j] == ','
				|| st[j] == ';'
				|| st[j] == '.'
				|| st[j] == '!'
				|| st[j] == '"'
				|| st[j] == '('
				|| st[j] == ')'
				|| st[j] == '{'
				|| st[j] == '\t'
				|| st[j] == '}'
				|| st[j] == '\n'
				|| st[j] == '?')
			cap = 1;
		else
			cap = 0;
		j++;
	}
	return (st);
}

