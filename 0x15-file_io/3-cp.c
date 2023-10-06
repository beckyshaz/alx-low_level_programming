#include "main.h"
/**
 *handle_error - function to handle error encountered while opening file
 *@file_from: file to copy contents from
 *@file_to: file to copy contents to
 *@argv: argument vector
 *Return: void
 */
void handle_error(int file_from, int file_to, char **argv)
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", argv[1]);
		exit(99);
	}
}
/**
 *main - Entry point
 *@argc: this is the number of arguments
 *@argv: this is pointer to argument vector
 *Return: Always 0
 */
int main(int argc, char **argv)
{
	int file_to, error_close, file_from;
	char buff[1024];
	ssize_t numb_chars, numbwr;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	handle_error(file_from, file_to, argv);

	numb_chars = 1024;
	while (numb_chars == 1024)
	{
		numb_chars = read(file_from, buff, 1024);
		if (numb_chars == -1)
			handle_error(-1, 0, argv);
		numbwr = write(file_to, buff, numb_chars);
		if (numbwr == -1)
			handle_error(0, -1, argv);
	}
	error_close = close(file_from);
	if (error_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	error_close = close(file_to);
	if (error_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
		exit(100);
	}
	return (0);
}
