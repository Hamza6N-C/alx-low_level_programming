#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: input pointer
 * @src: input pointer
 * @k: input value
 *
 * Return: void
 */
char *_strcat(char *dest, char *src, int n)
{
	int a;
	int b;

	a = 0;
	while (dest[a] != '\0')
	{
		a++;
	}
	b = 0;
	while ( b < k && src[b] != '\0')
	{
		dest[a] = src[b];
		a++;
		b++;
	}

	dest[a] = '\0';
	return (dest);
}

