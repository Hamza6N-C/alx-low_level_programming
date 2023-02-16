#include <stdio.h>
/**
 * main - Entry
 * Return 0 (Success)
 */
int main(void)
{
	char k;
	int l;
	long int m;
	long long int n;
	float p;
printf("Size of a char: %a byte(s)\n", (unsigned long)sizeof(k));
printf("Size of a int: %a byte(s)\n", (unsigned long)sizeof(l));
printf("Size of long int: %a bytes(s)\n", (unsigned long)sizeof(m));
printf("Size of a long long int: %a bytes(s)\n", (unsigned long)sizeof(n));
printf("size of a float: %a bytes(s)\n", (unsigned long)sizeof(p));
return (0);
}
