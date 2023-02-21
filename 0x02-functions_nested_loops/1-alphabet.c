#include "main.h"
/**
 * print_alphabet - prints the alphabet, in lowercase, followed by a new line.
 * Return: ALways 0
*/

void print_alphabet(void)
{
	char low;

	for (low = 'a'; low <= 'z'; low++)
		_putchar(low);
	_putchar('\n');
}

