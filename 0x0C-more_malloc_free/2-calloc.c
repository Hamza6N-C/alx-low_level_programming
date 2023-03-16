#include <stdlib.h>
#include "main.h"

/**
 * _calloc - allocates memory for an array
 * @nmemb: number of elements in the array
 * @size: size of each element
 *
 * Return: pointer to allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *a;
	unsigned int b;

	if (nmemb == 0 || size == 0)
	return (NULL);
	a = malloc(nmemb * size);
	if (a == NULL)
	return (NULL);
	for (b = 0; b < (nmemb * size); b++)
	a[b] = 0;
	return (a);
}
