#include "main.h"
/**
 * swap_int - swaps the values of two integers
 * @a : swaped integer
 * @b : swaped integer
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int x;

	x = *b;
	*b = *a;
	*a = x;
}
