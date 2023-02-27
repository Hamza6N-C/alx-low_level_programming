#include "main.h"
/**
 * puts2 - prints every other character of a string
 * starting with the first character
 * @str: string
 *
 * Return: void
 */
void puts2(char *str)
{
	int l = 0;
	int a = 0;
	char *x = str;
	int k;

	while (*x != '\0')
	{
	x++;
	l++;
	}
	a = l - 1;
	for (k = 0 ; k <= a ; k++)
	{
	if (k % 2 == 0)
	{
	_putchar(str[k]);
	}
	}
	_putchar('\n');
}
