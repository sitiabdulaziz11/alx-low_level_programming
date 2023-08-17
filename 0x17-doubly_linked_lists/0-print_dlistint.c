#include "lists.h"

/**
 * print_dlistint - function that prints all the elements of a dlistint_t list.
 * @h: head
 *
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int k = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		k++;
	}
	return (k);
}
