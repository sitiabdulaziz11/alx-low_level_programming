#include "lists.h"
/**
 * print_listint_safe - Prints a listint_t linked list.
 * @head: Pointer to the head of the list.
 *
 * Return: The number of nodes in the list.i
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *ptr;
	size_t i = 0;

	while (head != NULL)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		i++;

		ptr = head;
		head = head->next;

		if (ptr <= head)
		{
			printf("-> [%p] %d\n", (void *)head, head->n);
			break;
		}
	}
	return (i);
}
