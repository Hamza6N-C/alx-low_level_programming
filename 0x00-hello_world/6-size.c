#include <stdio.h>
/**
 * main - Entry
 * Return: Always 0
 */

int main(void)
{
	int a;
	long int b;
	long long int c;
	char d;
	float e;

	printf("Size of a char: %i byte(s)\n", (unsigned long)sizeof(d));
	printf("Size of an int: %i byte(s)\n", (unsigned long)sizeof(a));
	printf("Size of a long int: %i byte(s)\n", (unsigned long)sizeof(b));
	printf("Size of a long long int: %i byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of a float: %i byte(s)\n", (unsigned long)sizeof(e));
	return (0);
}
