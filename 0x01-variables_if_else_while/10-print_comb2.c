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
	int a = 48;
	int b = 48;

	while (b <= 57)
	{
		putchar(a);
		putchar(b);
		if (a == 57 && b == 57)
		{
		break;
		}
		putchar(',');
		putchar(' ');
		b++;
		if (b == 58)
		{
			b = 48;
			a++;
		}
	}
	putchar('\n');
	return (0);
}
