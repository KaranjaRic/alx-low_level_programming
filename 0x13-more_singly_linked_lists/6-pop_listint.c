#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t list
 * @head: Double pointer
 * Return: head node's data (n)
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int p;

	temp = *head;
	if (temp == NULL)
		return (0);
	*head = temp->next;

	p = temp->n;
	free(temp);

	return (p);
}
