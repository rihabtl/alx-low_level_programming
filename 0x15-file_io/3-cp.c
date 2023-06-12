#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: Input Number of Arguments
 * @argv: Input Arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int f_rd, f_wr, rd_bytes, wr_bytes;
	char buffer[BUFSIZ];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		return (97);
	}

	f_rd = open(argv[1], O_RDONLY);
	if (f_rd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		return (98);
	}

	f_wr = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH);
	if (f_wr == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		close(f_rd);
		return (99);
	}

	while ((rd_bytes = read(f_rd, buffer, BUFSIZ)) > 0)
	{
		wr_bytes = write(f_wr, buffer, rd_bytes);
		if (wr_bytes == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close(f_rd);
			close(f_wr);
			return (99);
		}
	}

	if (rd_bytes == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		close(f_rd);
		close(f_wr);
		return (98);
	}

	if (close(f_rd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f_rd);
		return (100);
	}

	if (close(f_wr) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f_wr);
		return (100);
	}

	return (0);
}
