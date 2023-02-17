#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry
 * Return: ALways 0
 */
int main (void)
{
	int m;
	int k;

	srand(time(0));
	m = rand() - RAND_MAX / 2;
	k = m % 10;

	if (k > 5)
	{
		printf("Last digit of %d is %d and is grater than 5\n", m, k);
	}
	else if (k == 0)
	{
		printf("Last digit of %d is %d and is 0\n", m, m);
	}
		else 
		{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", m, k);
		}
		return (0);	
