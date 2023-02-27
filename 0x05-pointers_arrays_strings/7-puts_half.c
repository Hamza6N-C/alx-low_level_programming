#include "main.h"
/**
 * puts_half - prints half of a string
 * if num of char is odd n = (length_of_the_string - 1) / 2
 * @str: input
 *
 * Return: void
 */
void puts_half(char *str)
{
	int i, n, l;

	l = 0;
	while (str[i] != '\0')
	l++;
	n = (l / 2);
	if ((l % 2) == 1)
	n = ((l - 1) / 2);
	for (i = n; str[i] != '\0'; i++)
	_putchar(str[i]);
	_putchar('\n');
}

