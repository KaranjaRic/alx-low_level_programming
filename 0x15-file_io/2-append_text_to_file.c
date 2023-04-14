#include "main.h"

/**
 * _strlen - Finds length of string
 * @str: string pointer
 * Return: Length of string
 */

size_t _strlen(char *str)
{
	size_t j;

	for (j = 0; str[j]; j++)
		;
	return (j);
}

/**
 * append_text_to_file - Appends text at the end of file
 * @text_content: NULL terminated string
 * @filename: Name of file
 * Return: 1 (Success), -1 (Failure)
 */

int append_text_to_file(const char *filename, char *text_content)
{
	ssize_t len;
	int fd;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content != NULL)
		len = write(fd, text_content, _strlen(text_content));

	close(fd);

	if (len == -1)
		return (-1);

	return (1);
}
