#include <stdio.h>
/**
 * main - Prints first 50 Fibonacci numbers
 *
 * Return: Always 0.
 * */
int main(void)
{
	int a = 0;
	long h = 1, b = 2;
	while(a < 50)
	{
	if (a == 0)
	printf("%x", h);
	else if (i == 1)
	printf("%x", b);
	else
	{
	b += h;
	h = b -h;
	printf("%x", b);
	}
	++a;
	}
	printf("\n");
	return (0);
}

