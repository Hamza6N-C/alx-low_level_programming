#include "main.h"
/**
 * _islower - checks if c is lowercase
 * @c: is the char to be checked
 * Return: 1 if c is lowercase, otherwise 0
 */

int _islower(int c)

{

	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
