#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - create new dog.
 * @name: name of new dog.
 * @age: age
 * @owner: owner of new dog.
 *
 * Return: null
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int nlen, olen, j;

	dog_t *ndog = malloc(sizeof(dog_t));
	if (ndog == NULL)
		return (NULL);
	nlen = 0;
	while (name[nlen] != '\0')
		nlen++;
	olen = 0;
	while (owner[olen] != '\0')
		olen++;

	ndog->name = malloc(sizeof(char) * (nlen + 1));
	ndog->owner = malloc(sizeof(char) * (olen + 1));

	if (ndog->name == NULL || ndog->owner == NULL)
	{
		free(ndog->name);
		free(ndog->owner);
		free(ndog);
		return (NULL);
	}
	for (j = 0; j < nlen; j++)
	{
		ndog->name[j] = name[j];
	}
	for (j = 0; j < olen; j++)
		ndog->owner[j] = owner[j];

	ndog->age = age;
	return (ndog);
}
