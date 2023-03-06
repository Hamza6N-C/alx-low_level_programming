#include "main.h"
/**
 * _memset - fills memory with a constant byte
 * @s: pointer
 * @b: constant byte
 * @n: number of memory area
 *
 * Return: Always 0 (Sucess)
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
