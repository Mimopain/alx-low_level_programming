#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file
 * @filename: The name of the file
 * @text_content: The string to append
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, w_status;
	ssize_t len = 0, w_bytes;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		return (1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	while (text_content[len] != '\0')
		len++;

	w_bytes = write(fd, text_content, len);
	if (w_bytes == -1 || w_bytes != len)
	{
		close(fd);
		return (-1);
	}
	w_status = close(fd);
	if (w_status == -1)
		return (-1);

	return (1);
}
