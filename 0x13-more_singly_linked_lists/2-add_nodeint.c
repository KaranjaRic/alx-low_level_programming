#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - Add node at beginning of a listint_t list
 * @head: Head of double pointer
 * @n: int to add to the list
 * Return: NULL if fails
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr;

	if (head == NULL)
		return (NULL);
	ptr = malloc(sizeof(listint_t));

	if (ptr == NULL)
		return (NULL);
	ptr->n = n;
	ptr->next = *head;
	*head = ptr;

	return (ptr);
}
