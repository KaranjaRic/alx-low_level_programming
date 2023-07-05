#include "lists.h"

/**
 * find_listint_loop - finds the loop in linked list
 * @head: pointer to beginning of the list
 * Return: address of node where the loop starts or NULL if there is no loop
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *tortoise, *hare;

	tortoise = hare = head;

	while (tortoise && hare && hare->next)
	{
		tortoise = tortoise->next;
		hare = hare->next->next;
		if (tortoise == hare)
		{
			tortoise = head;
			break;
		}
	}
	if (tortoise || !hare || !hare->next)
		return (NULL);

	while (tortoise != hare)
	{
		tortoise = tortoise->next;
		hare = hare->next;
	}
	return (hare);
}
