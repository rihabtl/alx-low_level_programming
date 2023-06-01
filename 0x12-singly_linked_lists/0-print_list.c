#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all the elements of a list_t list
 * @h: pointer to list
 * Return: nodes
 */

size_t print_list(const list_t *h)
{
	size_t s = 0;

	while (h != NULL) {
		if (!(*h).str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", (*h).len, (*h).str);
		h = (*h).next;
		s++;
	}

	return s;
}
