#include "main.h"

/**
 * set_string - sets the value of a pointer to a char
 * @s: pointer to pointer
 * @to: pointer char
 *
 * Return: Always 0 (Success)
 */

void set_string(char **s, char *to)
{
	*s = to;
}
