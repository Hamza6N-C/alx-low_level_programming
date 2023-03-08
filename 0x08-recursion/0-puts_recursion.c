#include "main.h"
/**
 * _puts_recursion - prints a string, followed by a new line
 * @s: input
 *
 * Return: Always 0 (Success)
 */
void _puts_recursion(char *s)
{
	if (*s  == '\0')
	{
		_putchar('\n');
	}
	_putchar(*s);
	s++;
	_puts_recursion(s);
}

