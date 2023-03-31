#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a linked list
 * @head: double pointer to the list_t list
 * @str: new string to add in the node
 *
 * Return: the address of the new element, or NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int l = 0;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
	free(new);
	return (NULL);
	}
	new->str = strdup(str);
	while (str[l] != '\0')
	{
	l++;
	}
	new->len = l;
	if (*head != NULL)
	new->next = *head;
	if (*head == NULL)
	new->next = NULL;
	*head = new;
	return (*head);
}
