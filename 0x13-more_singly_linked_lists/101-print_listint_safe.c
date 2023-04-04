#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * _r - reallocates memory for an array of pointers to the
 * nodes in a linked list
 * @size: Size of new list (always one more than old)
 * @list: Old list to append
 * @new: New node to add to the list
 * Return: New list pointer
 */

const listint_t **_r(const listint_t **list, size_t size, const listint_t *new)
{
	const listint_t **newlist;
	size_t j;

	newlist = malloc(size * sizeof(listint_t *));

	if (newlist == NULL)
	{
		free(list);
		exit(98);
	}
	for (j = 0; j < size - 1; j++)
		newlist[j] = list[j];

	newlist[j] = new;
	free(list);
	return (newlist);
}

/**
 * print_listint_safe - Prints a listint_t list
 * @head: Head pointer
 * Return: Number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t j, num = 0;
	const listint_t **list = NULL;

	while (head != NULL)
	{
		for (j = 0; j < num; j++)
		{
			if (head == list[j])
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free(list);
				return (num);
			}
		}
		num++;
		list = _r(list, num, head);
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
	}
	free(list);
	return (num);
}
