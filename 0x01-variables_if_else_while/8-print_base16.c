#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - prints all the numbers of base 16 in lowercase
 * Return: ALways 0
 */
int main(void)
{
	int a;
	char l;

	for (a = '0'; a <= '9'; a++)
		putchar(a);
	for (l = 'a'; l <= 'f'; l++)
		putchar(l);
	putchar('\n');
	return (0);
}
