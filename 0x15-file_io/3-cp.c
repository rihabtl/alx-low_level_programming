#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * print_error - Prints formatted error message
 * @message: string that contains the error
 * @file: string that represents the name of the file
 */

void print_error(const char *message, const char *file)
{
	dprintf(STDERR_FILENO, message, file);
}

/**
 * open_file - Opens a file with specified flags
 * @file: path of the file to be opened.
 * @flags: flags to be used for opening the file
 * @mode: permission for the new file
 * Return: An integer
 */

int open_file(const char *file, int flags, mode_t mode)
{
	int fd = open(file, flags, mode);

	if (fd < 0)
	{
		print_error("Error: Can't open file %s\n", file);
		exit(98);
	}
	return (fd);
}

/**
 * close_file - Closes the file descriptor.
 * @fd: Integer representing the file descriptor to be closed.
 * Return: None.
 */

void close_file(int fd)
{
	if (close(fd) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * copy_file - copies the file
 * @file_from: path of the source file
 * @file_to: path of the destination file
 * Return: 0
 */

void copy_file(const char *file_from, const char *file_to)
{
	int fd_from, fd_to;
	char buffer[BUFSIZ];
	ssize_t bytes_read, bytes_written;

	fd_from = open_file(file_from, O_RDONLY, 0);
	fd_to = open_file(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);

	while ((bytes_read = read(fd_from, buffer, BUFSIZ)) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written != bytes_read)
		{
			print_error("Error: Can't write to %s\n", file_to);
			close_file(fd_from);
			close_file(fd_to);
			exit(99);
		}
	}

	if (bytes_read < 0)
	{
		print_error("Error: Can't read from file %s\n", file_from);
		exit(98);
	}

	close_file(fd_from);
	close_file(fd_to);
}

/**
 * main - Entry point
 * @argc: Number of Arguments
 * @argv: Arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		print_error("Usage: cp file_from file_to\n", "");
		exit(97);
	}

	copy_file(argv[1], argv[2]);

	return (0);
}
