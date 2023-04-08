#include "main.h"

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: is pointing to a string of 0 and 1 chars
 *
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
int i;
unsigned int dec_num = 0;

if (!b)
return (0);
for (i = 0; b[i]; i++)
{
if (b[i] < '0' || b[i] > '1')
return (0);
dec_num = 2 * dec_num + b[i];
}
return (dec_num);
}
