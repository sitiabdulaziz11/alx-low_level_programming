#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: pointer to a pointer to the head of the list.
 * @idx: index where the new node should be added.
 * @n: integer value for the new node.
 *
 * Return: address of the new node, or NULL if it failed.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int cou = 0;
	listint_t *ptr, *ptr1, *ptr2;

	if (head == NULL)
		return (NULL);
	if (idx == 0)
	{
		ptr = malloc(sizeof(listint_t));
		if (ptr == NULL)
			return (NULL);
		ptr->n = n;
		ptr->next = *head;
		*head = ptr;
	}
	ptr1 = *head;
	while (ptr1 != NULL && cou < idx - 1)
	{
		ptr1 = ptr1->next;
		cou++;
	}
	if (ptr1 == NULL || ptr1->next == NULL)
		return (NULL);
	ptr2 = malloc(sizeof(listint_t));
	if (ptr2 == NULL)
		return (NULL);
	ptr2->n = n;
	ptr2->next = ptr1->next;
	ptr1->next = ptr2;

	return (ptr2);
}

