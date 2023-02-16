#include <stdio.h>
/**
 * main - Entry
 * Return 0 (Success)
 */
int main(void)
{
	int k;
	long int l;
	long long int m;
	float n;
	char p;
printf("Size of int: %a byte(s)\n", (unsigned long)sizeof(k));
printf("size of long int: %a byte(s)\n", (unsigned long)sizeof(l));
printf("size of long long int: %a byte(s)\n", (unsigned long)sizeof(m));
printf("size of float: %a byte(s)\n", (unsigned long)sizeof(n));
printf("size of chart: %a byte(s)\n", (unsigned long)sizeof(p));
return (0);
}
