#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of the file
 * @text_content: a NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int file_descriptor, bytes_read = 0;
	ssize_t bytes_written;

	if (!filename)
		return (-1);
	file_descriptor = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (file_descriptor == -1)
		return (-1);
	if (text_content)
	{
		while (text_content[bytes_read])
			bytes_read++;
		bytes_written = write(file_descriptor, text_content, bytes_read);
		if (bytes_written == -1)
		{
			close(file_descriptor);
			return (-1);
		}
	}
	close(file_descriptor);
	return (1);
}
