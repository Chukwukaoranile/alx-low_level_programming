#include "lists.h"

/**
 * print_listint - A function that prints all the
 * elements ofa listint_t list.
 *
 * @h: Parameter
 *
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t n = 0;

	if (h == NULL)
	{
		return (0);
	}
	while (h != NULL)
	{
		printf("%i\n", h->n);
		h = h->next;
		n++;
	}
	return (n);
}
