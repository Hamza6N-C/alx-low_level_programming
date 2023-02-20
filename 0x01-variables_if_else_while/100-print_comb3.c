#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - prints all possible different combinations of three digits
 * Return: ALways 0
 */
int main(void)
{
	int i;
	int j;

	for (i = '0'; i <= '8'; i++)
	{
	for (j = '1'; j <= '9'; j++)
	{
		putchar(i);
		putchar(j);
	}}
	return (0);
}
