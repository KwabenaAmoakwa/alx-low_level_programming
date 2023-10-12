#include "lists.h"

/**
 * dlistint_len - prints length
 * @h: argument
 *
 * Return: length of struct
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
