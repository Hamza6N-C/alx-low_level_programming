#include <stdio.h>
/**
 * main - Prints first 50 Fibonacci numbers
 *
 * Return: nothing
 */
int main(void)
{
	int a = 0;
	long h = 1, b = 2;

	while (a < 50)
	{
	if (a == 0)
	printf("%ld", h);
	else if (a == 1)
	printf(", %ld", b);
	else
	{
	b += h;
	h = b - h;
	printf(", %ld", b);
	}
	++a;
	}
	printf("\n");
	return (0);
}

