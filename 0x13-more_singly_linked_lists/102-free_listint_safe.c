#include "lists.h"
/**
 * free_listint_safe - function that frees a listint_t list.
 * @h: ointer to a pointer to the head of the list.
 *
 * Return: The size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *ptr;
	size_t g;

	while (*h != NULL)
	{
		ptr = *h;
		*h = (*h)->next;
		free(ptr);
		g++;

		if (ptr <= *h)
			break;
	}
	*h = NULL;
	return (g);
}
