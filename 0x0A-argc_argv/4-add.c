#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * check_num - check - string there are digit
 * @str: array str
 *
 * Return: Always 0 (Success)
 */

int check_num(char *str)
{
/*Declaring variables*/
	unsigned int c;

	c = 0;
	while (c < strlen(str))
	{
	if (!isdigit(str[c])) /*condition check */
	{
	return (0);
	}
	c++;
	}
	return (1);
}

/**
 * main - Print the name of the program
 * @argc: Count arguments
 * @argv: Arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	/*Declaring variables*/
	int c;
	int str_to_int;
	int s = 0;

	c = 1;
	while (c < argc) /*check the whole array*/
	{
	if (check_num(argv[c]))
	{
	str_to_int = atoi(argv[c]); /*ATOI --> convert string to int*/
	s += str_to_int;
	}
	/*Condition if one of the number contains symbols that are not digits*/
	else
	{
	printf("Error\n");
	return (1);
	}
	c++;
	}
	printf("%d\n", s);
	return (0);
}
