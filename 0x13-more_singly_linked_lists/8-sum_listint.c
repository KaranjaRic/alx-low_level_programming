#include "lists.h"

/**
 * sum_listint - Sum of all the data (n) of listint_t list
 * @head: First node pointer
 * Return: All data sum
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
