#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 * sum_listint - returns the sum of all the data (n) of a listint_t linked list
 * @head: list
 *
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	listint_t *mid;
	int sum = 0;

	mid = (listint_t *)malloc(sizeof(listint_t));
	if (mid == NULL)
		return (0);

	mid = head;

	for (; mid != NULL; mid = mid->next)
	{
		sum += mid->n;
	}
	return (sum);
}
