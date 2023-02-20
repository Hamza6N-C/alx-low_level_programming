#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - prints all possible different combinations of three digits
 * Return: ALways 0
 */
int main(void)
{
	int i, j;

	for (i = '0'; i <= '98'; i++)
{
	for (j = i + 1; j <= '99'; j++)
	{
	putchar((i / 10) + '0');
	putchar((i % 10) + '0');
	putchar(' ');
	putchar((q % 10) + '0');
	putchar((q % 10) + '0');

	if (i == '98' && j == '99')
	continue;
	putchar(',');
	putchar(' ');
	}}
	putchar('\n');
	return (0);
}
