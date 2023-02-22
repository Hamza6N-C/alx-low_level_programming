#include <stdio.h>
/**
 *  main - finds and prints the sum of Even Fibonacci numbers
 *
 *  Return: nothing
 */
int main(void)
{
	int i = 0;
	long j = 1, k = 2, a = k;

	while (k + j < 4000000)
	{
	k += j;
	if (k % 2 == 0)
	a += k;
	j = k - j;
	++i;
	}
	printf("%ld\n", a);
	return (0);
}
