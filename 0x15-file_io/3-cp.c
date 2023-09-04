#include "main.h"

/**
 * exit_with_error - exits the program with error code and message
 * @message: Message explaining the error
 * @exit_code: the exit code
 * @fd: file desciptor
 */
void exit_with_error(const char *message, int exit_code, char *fd)
{
	dprintf(STDERR_FILENO, "Error: %s %s\n", message, fd);
	exit(exit_code);
}

/**
 * main - copies the content of a file to another file
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 if success, 97-98-99-100 if error
 */
int main(int argc, char **argv)
{
	int fd_from, fd_to;
	char buffer[1024];
	ssize_t bytes_read, bytes_written;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
		exit(97);
	}
	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
		exit_with_error("Error: Can't read from file ", 98, argv[1]);
	fd_to = open(argv[2], O_CREAT | O_WRONLY);
	if (fd_to == -1)
		exit_with_error("Error: Can't write to file ", 99, argv[2]);
	while ((bytes_read = read(fd_from, buffer, 1024)) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written == -1)
			exit_with_error("Error: Can't write to file ", 99, argv[2]);
		if (bytes_written != bytes_read)
			exit_with_error("Error: Incomplete write to file ", 99, argv[2]);
	}
	if (bytes_read == -1)
		exit_with_error("Error: Can't read from file ", 98, argv[1]);
	if (close(fd_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
		exit(100);
	}
	if (close(fd_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
		exit(100);
	}
	return (0);
}
