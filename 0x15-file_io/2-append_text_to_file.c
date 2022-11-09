#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * Do not create the file if it does not exist
 * If text_content is NULL, do not add anything to the file
 *
 * @filename: name of the file
 *
 * @text_content: the NULL terminated string to add at the end of the file
 *
 *  Return: 1 on success
 *  -1 if the filename is null
 *  -1 if the file does not exist
 *  or if you do not have the required permissions to write the file
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o, w;
	int len = 0;

	if (!filename)
		return (-1);

	o = open(filename, O_WRONLY | O_APPEND);
	if (o == -1)
		return (-1);

	if (text_content == NULL)
	{
		close(o);
		return (1);
	}

	while (text_content[len])
		len++;

	w = write(o, text_content, len);
	close(o);

	if (w == -1)
		return (-1);

	return (1);
}

