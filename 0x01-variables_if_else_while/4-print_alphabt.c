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
	char ch = 'a';

	while (ch <= 'z')
	{
	if (ch != 'e' && ch != 'q')
	{
	putchar(ch);
	}
	ch++;
	}
	putchar('\n');
	return (0);
}
