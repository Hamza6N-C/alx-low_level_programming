#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - program that generates random valid
 * passwords for the program 101-crackme
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int pass[100];
	int i, s, n;

	s = 0;
	srand(time(NULL));
	for (i = 0; i < 100; i++)
	{
	pass[i] = rand() % 78;
	s += (pass[i] + '0');
	putchar(pass[i] + '0');
	if ((2772 - s) - '0' < 78)
	{
	n = 2772 - s - '0';
	s += n;
	putchar(n + '0');
	break;
	}
	}
	return (0);
}
