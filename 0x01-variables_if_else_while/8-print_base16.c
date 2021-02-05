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
	char n = 48;

	while (n <= 59 || n <= 103)
	{
		putchar(n);
		n++;
		if (n == 58)
			n = 97;
		if (n == 103)
		{
			putchar ('\n');
			break;
		}
	}
	return (0);
}
