#include "main.h"
#include <stdlib.h>


/**
 * read_textfile- Read text file print to STDOUT
 * @filename: text file to read
 * @letters: number of letters
 * Return: w- or 0 when function fails or filename is NULL
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t w;
	ssize_t t;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (-1);

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
	{
		close(fd);
		return (-1);
	}

	t = read(fd, buf, letters);
	if (t == -1)
	{
		free(buf);
		close(fd);
		return (-1);
	}

	w = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(fd);

	return (w);
}
