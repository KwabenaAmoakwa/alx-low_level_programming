#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes the node at a given index.
 * @head: A pointer to a pointer to the head of the list
 * @index: The index of the node to be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *current = *head;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = current->next;
		if (current->next != NULL)
			current->next->prev = NULL;
		free(current);
		return (1);
	}

	while (current != NULL)
	{
		if (count == index)
		{
			current->prev->next = current->next;
			if (current->next != NULL)
			{
				current->next->prev = current->prev;
			}
			free(current);
			return (1);
		}
		current = current->next;
		count++;
	}

	return (-1);
}
