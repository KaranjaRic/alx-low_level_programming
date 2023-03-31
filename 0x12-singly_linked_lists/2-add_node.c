#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * _strlen - Function that return length of a string
 * @s: character
 * Return: value is i
 */

int _strlen(const char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * add_node - Add new node at beginning of a list_t list
 * @head: Head of a list_t list
 * @str: Value to insert into elements
 * Return: The number of nodes
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *add;

	add = malloc(sizeof(list_t));
	if (add == NULL)
		return (NULL);

	add->str = strdup(str);

	add->len = _strlen(str);
	add->next = *head;
	*head = add;

	return (add);
}
