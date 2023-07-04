#include "lists.h"
/**
 * print_listint - function that prints all the elements of a listint_t list.
 * @h: head.
 *
 * Return: number of node.
 */
size_t print_listint(const listint_t *h)
{
	size_t k;

	k = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		k++;
	}
	return (k);
}
