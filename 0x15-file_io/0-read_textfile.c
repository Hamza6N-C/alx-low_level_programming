#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- reads a text file and prints it to the POSIX standard output.
 * @filename: text file
 * @letters: the number of letters it should read and print
 * Return: the actual number of letters it could read and print
 * 0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *b;
	ssize_t a;
	ssize_t c;
	ssize_t d;

	a = open(filename, O_RDONLY);
	if (a == -1)
		return (0);
	b = malloc(sizeof(char) * letters);
	d = read(a, b, letters);
	c = write(STDOUT_FILENO, b, d);
	free(b);
	close(a);
	return (c);
}
