#include "main.h"

/**
 *read_textfile - function that reads a text file and prints
 *it to the POSIX standard output
 *@filename: pointer to the file
 *@letters: letters is the number of letters it should read and print
 *Return: actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd;
	char *buf;
	ssize_t no_w, no_r;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);
	no_r = read(fd, buf, letters);
	no_w = write(STDOUT_FILENO, buf, no_r);
	close(fd);
	free(buf);
	return (no_w);
}
