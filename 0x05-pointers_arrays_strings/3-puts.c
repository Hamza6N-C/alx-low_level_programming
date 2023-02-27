#include "main.h"

/**
 * _puts - function that prints a string
 * followed by a new line, to stdout
 * @str : string
 *
 * Return: str
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
	_putchar (*str++);
	}
	putchar_('\n');
}
