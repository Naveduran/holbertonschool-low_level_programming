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

	for (i = 'z' ; i >= 'a' ; i--)
	{
	putchar(i);
	}
	putchar('\n');
	return (0);
}
