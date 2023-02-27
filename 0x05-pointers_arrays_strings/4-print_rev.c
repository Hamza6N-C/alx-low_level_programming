#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line
 * @s : string to be reversed
 *
 * Return: void
 */
void print_rev(char *s)
{
	int l = 0;
	int k;

	while (*s != '\0')
	{
	l++;
	s++;
	}
	s--;
	for (k = l; k > 0; k--)
	{
	_putchar(*s);
	s--;
	}
	_putchar('\n');
}
