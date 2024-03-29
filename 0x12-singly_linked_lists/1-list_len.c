#include <stdlib.h>
#include "lists.h"
#include <string.h>

/**
 * list_len - returns the number of elements in a linked list
 * @h: pointer to the list_t list
 *
 * Return: number of elements in h
 */
size_t list_len(const list_t *h)
{
	size_t i;

	i = 0;
	while (h)
	{
	i++;
	h = h->next;
	}
	return (i);
}
