#include "main.h"
#include <stdlib.h>
#include <unistd.h>

/**
 * read_textfile -  function that reads a text file and prints
 *
 * @filename: file to read
 *
 * @letters: letters it should read and write
 *
 * Return: ...
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buff;
	ssize_t fd;
	ssize_t w;
	ssize_t t;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buff = malloc(sizeof(char) * letters);
	t = read(fd, buff, letters);
	w = write(STDOUT_FILENO, buff, t);

	free(buff);
	close(fd);
	return (w);
}
