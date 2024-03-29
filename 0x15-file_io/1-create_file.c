#include "main.h"

/**
 *create_file - function that creates a file
 *@filename: pointer to the file
 *@text_content: is a NULL terminated string to write to the file
 *Return: 1 on success -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int w, text_len, fd;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (text_content == NULL)
		text_content = "";
	for (text_len = 0; text_content[text_len]; text_len++)
		;
	w = write(fd, text_content, text_len);
	if (w == -1)
		return (-1);
	close(fd);
	return (1);
}
