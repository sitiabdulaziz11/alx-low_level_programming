#include "lists.h"
/**
 * get_nodeint_at_index - function that returns the nth node of a list.`
 * @head: pointer to pointer.
 * @index: index of the node, starting at 0.
 *
 * Return: nth node or null.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *ptr;
	unsigned int g = 0;

	if (head != NULL)
	{
		ptr = head;
		while (ptr != NULL)
		{
			if (g == index)
				return (ptr);
			Ptr = ptr->next;
			g++;
		}
	}
	return (NULL);
}
