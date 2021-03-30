#include "holberton.h"
/**
 * read_textfile - a function that reads a text file and prints it to the POSIX
 * standard output.
 * @letters: is the number of letters it should read and print
 * @filename: ..
 * Return: if the file can not be opened or read, return 0. If filename is
 * NULL return 0. if write fails or does not write the expected amount of
 * bytes, return 0.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	unsigned int number_of_bytes = 0;
	int fd, check = 0;
	char *buffer;

	buffer = malloc(sizeof(char) * letters);
	if (buffer)
	{
		if (filename)
		{
			fd = open(filename, O_RDONLY);
			if (fd == -1)
			{
				return (0);
			}
			number_of_bytes = check = read(fd, buffer, letters);
			if (check == -1)
				return (0);
			close(fd);
			check = write(STDOUT_FILENO, buffer, number_of_bytes);
			if (check == -1)
				return (0);
		}
	}
	return (number_of_bytes);
}
