#include "main.h"

/**
 * flip_bits - eturns the number of bits you would need to flip
 * to get from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
int i, k = 0;
	unsigned long int j;
	unsigned long int a = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		j = a >> i;
		if (j & 1)
			k++;
	}
	return (k);
}
