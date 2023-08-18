#include "lists.h"

/**
 * insert_dnodeint_at_index - function inserts a new node at a given position.
 * @h: head
 * @idx: index
 * @n: data
 *
 * Return: the address of the new node, or NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *ptr, *tmp;
	unsigned int i;

	if (*h == NULL)
		return (NULL);

	ptr = malloc(sizeof(dlistint_t));
	if (ptr == NULL)
		return (NULL);
	ptr->n = n;
	ptr->prev = NULL;
	ptr->next = NULL;

	if (idx == 0)
	{
		(*h)->prev = ptr;
		ptr->next = *h;
		*h = ptr;
		return (ptr);
	}
	tmp = *h;
	i = 0;
	while (tmp != NULL)
	{
		if (i == idx)
		{
			tmp->prev = ptr;
			ptr->next = tmp;
			tmp = ptr;
			return (ptr);
		}
		tmp = tmp->next;
		i++;
	}
	return (ptr);
}

