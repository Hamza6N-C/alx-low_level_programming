#include "main.h"
/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase.
 * followed by a new line.
 * Return: void
*/

void print_alphabet_x10(void)
{
	char low;
	int i;

	for (i = '0'; i <= '9'; i++)
	{
	for (low = 'a'; low <= 'z'; low++)
	{
	_putchar(low);
	}
	_putchar('\n');
	}
}
