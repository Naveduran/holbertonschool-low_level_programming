#include "holberton.h"
/**
 * append_text_to_file - Create a function that creates a file.
 * @filename: the name of the file to create
 * @text_content: is a NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure (file can not be created,
 * file can not be written, write fails, etc)
 */
int append_text_to_file(const char *filename, char *text_content)
{
	unsigned int length = 0;
	int file_descriptor, checking = 0;

	if (!text_content)
		text_content = "";
	for (length = 0; text_content[length]; length++)
	{}
	if (filename)
	{
		file_descriptor = open(filename, O_WRONLY | O_APPEND);
		if (file_descriptor == -1)
		{
			return (-1);
		}
		checking = write(file_descriptor, text_content, length);
		if (checking == -1)
		{
			return (-1);
		}
		close(file_descriptor);
		return (1);
	}
	return (-1);
}
