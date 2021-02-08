#include <stdio.h>

/**
 * main - prints all the different combinations of three digits.
 *
 * Return: zero
 */

int main(void)
{

	int c = 0;

	int d = 1;

	int u = 2;

	int x = printf("%d%d%d", c, d, u);

	while (x < 1000)
	{
		u++;
		if (u == 9)
		{
			u = 0;
			d++;
		}
		else if (d == 9)
		{
			c++;
		}
		else if (c < d && d < u)
		{
			putchar(c);
			putchar(d);
			putchar(u);
			putchar(';');
			putchar(' ');
		}
		else
		{
		}
	}
	putchar ('\n');
	return (0);
}
