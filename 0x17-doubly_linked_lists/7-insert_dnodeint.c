#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position.
 * @h: A pointer to a pointer to the head of the list
 * @idx: The index at which to insert the new node
 * @n: The data for the new node
 * Return: The address of the new node, or NULL on failure
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int count = 0;
	dlistint_t *new_node, *current, *prev_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	if (idx == 0)
	{
		new_node->prev = NULL;
		new_node->next = *h;
		if (*h != NULL)
			(*h)->prev = new_node;
		*h = new_node;
		return (new_node);
	}
	current = *h;
	prev_node = NULL;
	while (current != NULL)
	{
		if (count == idx)
		{
			new_node->next = current;
			new_node->prev = prev_node;
			current->prev = new_node;
			prev_node->next = new_node;
			return (new_node);
		}
		prev_node = current;
		current = current->next;
		count++;
	}
	free(new_node);
	return (NULL);
}
