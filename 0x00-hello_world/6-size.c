#include <stdio.h>
/**
 * main - Entry
 * Return 0 (Success)
 */
int main(void)
{
	printf("Size of a char: %a byte(s)\n", sizeof(char));
	printf("Size of a int: %a byte(s)\n", sizeof(int));
	printf("Size of long int: %a bytes(s)\n", sizeof(long int));
	printf("Size of a long long int: %a bytes(s)\n", sizeof(long long int));
	printf("size of a float: %a bytes(s)\n", sizeof(float));
	return (0);
}
