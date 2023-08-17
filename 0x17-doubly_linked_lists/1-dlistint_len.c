#include "lists.h"
/**
 * dlistint_len - function that returns the number of elementlinked list.
 * @h: head
 *
 * Return: returns the number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	int n = 0;

	while (h)
	{
		h = h->next;
		n++;
	}
	return (n);
}
