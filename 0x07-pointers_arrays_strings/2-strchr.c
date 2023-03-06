#include "main.h"
/**
 * _strchr - locates a character in a string
 * @s: pointer
 * @c: located char
 * Return: Always 0 (Success)
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		return (&s[i]);
		i++;
	}
	return (NULL);
}
