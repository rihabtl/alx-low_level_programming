#include "main.h"

/**
 * append_text_to_file- Appends a file
 * @filename: pointer to the file
 * @text_content: pointer to a string to add
 * Return: If the function fails - -1.
 */


int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	o = open(filename, O_WRONLY | O_APPEND);
	if (o == -1)
		return (-1);

	w = write(o, text_content, len);
	if (w == -1)
	{
		close(o);
		return (-1);
	}

	close(o);
	return (1);
}
