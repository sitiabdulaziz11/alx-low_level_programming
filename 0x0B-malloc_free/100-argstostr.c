#include "main.h"
#include <stdlib.h>
/**
 * argstostr - a function that concatenates all the arguments of our program.
 * @ac: count
 * @av: argument
 *
 * Return: pointer or null
 */
char *argstostr(int ac, char **av)
{
	int lent, ch_inde;
	int c, ar_inde;
	char *nptr;
	int all_lent;
	char *arv;

	if (ac == 0 || av == 0)
		return (NULL);
	all_lent = 0;
	for (c = 0; c < ac; c++)
	{
		arv = av[c];
		lent = 0;
		while (arv[lent] != '\0')
			lent++;
		all_lent += lent + 1;
	}
	nptr = (char *)malloc((all_lent + 1) * sizeof(char));
	if (nptr == NULL)
		return (NULL);
	ar_inde = 0;
	for (c = 0; c < ac; c++)
	{
		arv = av[c];
		ch_inde = 0;
		while (arv[ch_inde] != '\0')
		{
			nptr[ar_inde] = arv[ch_inde];
			ar_inde++;
			ch_inde++;
		}
		nptr[ar_inde] = '\n';
		ar_inde++;
	}
	nptr[ar_inde] = '\0';
	return (nptr);
}
