#include "holberton.h"
#include <stdio.h>
/**
 * main - prints the number of arguments passed into it.
 * @argv: values
 * @argc: counter of values
 * Return: always zero.
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
