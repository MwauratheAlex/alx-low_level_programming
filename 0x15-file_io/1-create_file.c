#include "main.h"

/**
 * create_file - creates a file with permissions r, w
 * If the file already exists, do not change the permissions
 * if the file already exists, truncate it
 * if text_content is NULL create an empty file
 *
 * @filename: name of the file
 *
 * @text_content: a NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure
 * if filename is NULL return -1
 */
int create_file(const char *filename, char *text_content)
{
	int o, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content)
	{
		while (text_content[len])
			len++;
	}

	o = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(o, text_content, len);

	if (0 == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}
