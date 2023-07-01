#include "lists.h"
/**
 * list_len - length of linked list.
 * @h: head
 *
 * Return: num
 */
size_t list_len(const list_t *h)
{
	size_t num = 0;

	while (h != NULL)
	{
		num++;
		h = h->next;
	}
	return (num);
}
