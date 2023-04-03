#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - Inserting new node at a given position
 * @head: Double pointer
 * @idx: Index
 * @n: New node value
 * Return: Address of new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int k;
	listint_t *temp, *new;

	if (head == NULL)
		return (NULL);

	if (idx != 0)
	{
		temp = *head;
		for (k = 0; k < idx - 1 && temp != NULL; k++)
		{
			temp = temp->next;
		}
		if (temp == NULL)
			return (NULL);
	}
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	new->next = temp->next;
	temp->next = new;

	return (new);
}
