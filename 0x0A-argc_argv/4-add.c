#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _isdigit - it lets to find if a string has only numbers
 * @string: needs a string to prove if it contains only digits
 *
 * Return: 1 if it has only numbers, and 0 other wise
 */

int _isdigit(char *string)
{
	if (*string == '\0')
	{
		return (1);
	}
	return ((*string >= '0' && *string <= '9') && (_isdigit(string + 1)));
}

/**
 * main - entry point
 * @argv: values
 * @argc: counter
 * Return: an int
 */

int main(int argc, char *argv[])
{
	int counter, suma;

	if (argc < 3)
	{
		printf("0\n");
		return (1);
	}

	suma = 0;

	for (counter = 1; counter < argc; counter++)
	{
		if (_isdigit(argv[counter]) == 0)
		{
			printf("Error\n");
			return (1);
		}
		suma = suma + atoi(argv[counter]);
	}
	printf("%d\n", suma);
	return (0);
}
