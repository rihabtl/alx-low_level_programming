#include "lists.h"
#include<stdlib.h>
#include<string.h>

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: Double pointer to the list
 * @str: New string to add
 * Return: the address of the new element
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	unsigned int str_len = 0;

	while (str[str_len])
		str_len++;

	new_node = malloc(sizeof(list_t));

	if (!new_node)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = str_len;
	new_node->next = (*head);
	(*head) = new_node;

	return (*head);
}
