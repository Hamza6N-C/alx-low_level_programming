#include "main.h"
/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 * Return: nothing
*/
void jack_bauer(void);
{
	int k, l, m, n;

	for (k = 0; k <= 2; k++)
	{
	for (l = 0; l <= 9; l++)
	{
	if ((k <= 1 && l <= 9) || (k <= 2 && l <= 3))
	{
	for (m = 0; m <= 5; m++)
	{
	for (n = 0; n <= 5; n++)
	{
	_putchar(k + '0');
	_putchar(l + '0');
	_putchar(58);
	_putchar(m + '0');
	_putchar(n + '0');
	_putchar('\n');
	}
	}
	}
	}
	}
}
