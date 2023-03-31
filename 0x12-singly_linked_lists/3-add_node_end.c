#include "lists.h"
#include <string.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * _strlen - Finds lengthof a string
 * @str: String to find length of
 * Return: Length of string
 */

unsigned int _strlen(char *str)
{
	unsigned int k;

	for (k = 0; str[k]; k++)
		;
	return (k);
}

/**
 * add_node_end - Adds a new node to the end of linked list
 * @head: Double pointer to a linked list
 * @str: String to add the new node
 * Return: Pointer to the new node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *tmp;

	if (str == NULL)
		return (NULL);
	new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);
	new->str = strdup(str);

	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	new->len = _strlen(new->str);
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	tmp = *head;

	while (tmp->next)
		tmp = tmp->next;
	tmp->next = new;
	return (new);
}
