#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: linked list
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t S = 0;

	while (h)
	{
		printf("%d\n", *h.n);
		S++;
		h = *h.next;
	}

	return (S);
}
