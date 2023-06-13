#include "main.h"

/**
 * create_file - Creates a file
 * @filename: A pointer to the name of the file to create
 * @text_content: A pointer to a string to write to the file
 *
 * Return: On SUCCESS, returns (1)
 *         On FAILURE, returns (-1) to indicate the function failed
 */
int create_file(const char *filename, char *text_content)
{
	int len, o, w;

	if (!filename)
		return (-1);

	if (text_content != NULL)
	{
		len = 0;
		while (text_content[len])
			len++;
	}
	o = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (!text_content)
	{
		close(o);
		return (1);
	}
	w = write(o, text_content, len);

	if (o == -1 || w == -1 || w != len)
	{
		close(o);
		return (-1);
	}
	close(o);

	return (1);
}
