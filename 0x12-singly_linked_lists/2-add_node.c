#include <stdlib.h>
#include <string.h>
#include "strlen.c"
#include "lists.h"

/**
 * add_node - adds a new node at beginning of list_t
 * @head: head of list.
 * @str: string to add to new list.
 * Return: list_t, address of the new element.
 * On failure, NULL.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node_ptr = malloc(sizeof(list_t));

	new_head = malloc(sizeof(list_t));

	if (new_head == NULL)
	{
		return (NULL);
	}
	else
	{
		new_head->str = strdup(str);
		new_head->len = length;
		new_head->next = *head;
		*head = new;
		return (new_head);
	}
}
