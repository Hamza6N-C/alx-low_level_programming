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

	for (i = '0'; i <= '8'; i++)
	{
	for (j = '1'; j <= '9'; j++)
	{
	if (i != j)
	{
		putchar(i);
		putchar(j);
	if (i == '8' && j == '9')
	continue;
	putchar(',');
	putchar(' ');
	}}}
	putchar('\n');
	return (0);
}
