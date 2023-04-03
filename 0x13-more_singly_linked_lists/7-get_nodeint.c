#include "lists.h"

/**
 * get_nodeint_at_index - nth node of a listint list
 * @head: First node pointer
 * @index: Index of the node
 * Return: Index pointer
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int j;

	if (head == NULL)
		return (NULL);
	for (j = 0; j < index; j++)
	{
		head = head->next;
		if (head == NULL)
			return (NULL);
	}
	return (head);
}
