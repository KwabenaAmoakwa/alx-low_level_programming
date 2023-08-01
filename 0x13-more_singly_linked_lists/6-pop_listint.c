#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint - deletes the head node of a listint_t linked list,
 * and returns the head node’s data (n)
 * @head: list
 *
 * Return: interger data in list
 */
int pop_listint(listint_t **head)
{
	int c;
	listint_t *temp;

	c = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (c);
}
