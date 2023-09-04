#include "main.h"

/**
 *append_text_to_file - function that appends text at the end of a file
 *@filename: pointer to the file
 *@text_content:  is the NULL terminated string to add at the end of the file
 *Return: 1 on success -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, text_len, w;

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		for (text_len = 0; text_content[text_len]; text_len++)
			;
		w = write(fd, text_content, text_len);
		if (w == -1)
			return (-1);
	}
	close(fd);
	return (1);
}
