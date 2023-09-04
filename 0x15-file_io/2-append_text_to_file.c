#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of the file
 * @text_content: NULL terminated string at the end of the file
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	FILE *file;
	size_t bytes_read = 0, bytes_written;

	if (!filename)
		return (-1);
	if (!text_content)
		return (1);
	file = fopen(filename, "a");
	if (!file)
		return (-1);
	while (text_content[bytes_read])
		bytes_read++;
	bytes_written = fwrite(text_content, sizeof(char), bytes_read, file);
	fclose(file);

	if (bytes_written != bytes_read)
		return (-1);
	return (1);
}
