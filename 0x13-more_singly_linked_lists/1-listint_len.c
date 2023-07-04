#include "lists.h"
/**
 * listint_len - function that returns the number of elements in a linked list.
 * @h: head.
 *
 * Return: number of element.
 */
size_t listint_len(const listint_t *h)
{
	int total;

	total = 0;
	while (h != NULL)
	{
		total++;
		h = h->next;
	}
	return (total);
}
