#include <stdio.h>
/**
 * main - Sum of multiple 3 and 5 bellow 1024
 * Return: Always 0.
 */
int main(void)
{
	int a, j = 0;

	while (a < 1024)
	{
	if ((a % 3  == 0) || (a % 5 == 0))
	{
	j += a;
	}
	a++;
	}
	printf("%d\n", j);
	return (0);
}

