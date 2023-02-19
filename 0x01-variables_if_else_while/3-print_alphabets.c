#include <stdio.h>
/**
 * main - Entry point of alphaBETIC
 * Return: Always 0 (Success)
 */
int main(void)
{
	char Aa;

	for (Aa = 'a'; Aa <= 'z'; Aa++)
	putchar(Aa);

	for (Aa = 'A'; Aa <= 'Z'; Aa++)
		putchar(Aa);
	putchar('\n');

	return (0);
}


