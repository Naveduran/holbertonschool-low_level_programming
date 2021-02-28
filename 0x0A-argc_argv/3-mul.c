#include "holberton.h"
#include <stdlib.h>
/**
 * main - prints the number of arguments passed into it.
 * @argv: values
 * @argc: counter of values
 * Return: always zero.
 */

int main(int argc, char *argv[])
{
	int mult, op1, op2;

	if (argc == 3)
	{
		op1 = atoi(argv[1]);
		op2 = atoi(argv[2]);
		mult = op1 * op2;
		printf("%d\n", mult);

		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
