#include "lists.h"
/**
 * add_node - a function that adds a new node at the beginning of a list.
 * @head: head.
 * @str: string.
 *
 * Return: The address of the new element, or NULL if it failed.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *n_node;

	if (str == NULL && head == NULL)
		return (NULL);

	n_node = malloc(sizeof(list_t));

	if (n_node == NULL)
		return (NULL);

	n_node->str = strdup(str);
	if (n_node->str == NULL)
	{
		free(n_node);
		return (NULL);
	}
	n_node->len = w_strlen(str);
	n_node->next = *head;
	*head = n_node;
	return (n_node);
}
/**
 * w_strlen - srting length.
 * @p: pointer.
 *
 * Return: len.
 */
int w_strlen(const char *p)
{
	int i = 0;

	while (p[i] != '\0')
		i++;
	return (i);
}
