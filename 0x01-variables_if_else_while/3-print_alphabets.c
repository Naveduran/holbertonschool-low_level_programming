#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - prints the alphabeth in lower
 * and upper case.
 *
 * Return: always zero.
 */

int main(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
	{
	putchar(i);
	}
	for (i = 'A' ; i <= 'Z' ; i++)
	{
	putchar(i);
	}
	putchar('\n');
	return (0);
}
