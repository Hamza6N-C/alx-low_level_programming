#include <stdio.h>
#include <sdtlib.h>
#include <time.h>
/**
 * main - prints if the number is pos,neg or 0
 * Return: ALways 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n ==)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
