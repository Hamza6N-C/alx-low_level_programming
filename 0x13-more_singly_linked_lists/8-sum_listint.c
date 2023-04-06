#include "lists.h"

/**
 * sum_listint - calculates the sum of all the data in a listint_t list
 * @head: first node in the linked list
 *
 * Return: resulting sum
 */
int sum_listint(listint_t *head)
{
	int k = 0;
	listint_t *temp = head;

	while (temp)
	{
		k += temp->n;
		temp = temp->next;
	}
	return (k);
}
