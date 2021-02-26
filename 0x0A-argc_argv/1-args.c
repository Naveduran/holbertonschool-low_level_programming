#include "holberton.h"

/**
 * main - prints the number of arguments passed into it.
 * @argv: values
 * @argc: counter of values
 * Return: always zero.
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
