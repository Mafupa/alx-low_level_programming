#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the standart output
 * @filename: the file name
 * @letters: the number of letters it should read and print
 * Return: the number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *file;
	char *buffer;
	ssize_t bytes_read, bytes_written;

	if (!filename)
		return (0);
	file = fopen(filename, "r");
	if (!file)
		return (0);
	buffer = malloc(letters + 1);
	if (!buffer)
	{
		fclose(file);
		return (0);
	}
	bytes_read = fread(buffer, sizeof(char), letters, file);
	if (bytes_read == -1)
	{
		free(buffer);
		fclose(file);
		return (0);
	}
	buffer[bytes_read] = '\0';
	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
	if (bytes_written == -1)
		bytes_written = 0;
	free(buffer);
	fclose(file);
	return (bytes_written);
}
