#include "holberton.h"
/**
 *  - ..
 * @p: ..
 * @o: ..
 * Return:..
 */
int create_file(const char *filename, char *text_content)
{
	unsigned int length;
	int file_descriptor, checking;

	if (!text_content)
		text_content = "";
	for (length = 0; text_content[length]; length++)
	{}
	if (filename)
	{
		file_descriptor = open(filename, O_WRONLY | O_CREAT | O_TRUNC,
0600);
		if (file_descriptor == -1)
			return (-1);
		checking = write(file_descriptor, text_content, length);
		if (checking == -1)
			return (-1);
		close(file_descriptor);
		return (1);
	}
	return (-1);
}
