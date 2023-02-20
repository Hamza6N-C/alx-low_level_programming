#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - prints the lowercase alphabet in reverse
 * Return: ALways 0
 */
int main(void)
{
	char low;

	for (low = 'z'; low = 'a'; low--)
	putchar(low);
	putchar('\n');
	Return(0);
}
