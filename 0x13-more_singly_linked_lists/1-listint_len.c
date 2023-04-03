#include "lists.h"

/**
 * listint_len - Number of elements in a linked listint_t list
 * @h: Head pointer
 * Return: Number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
