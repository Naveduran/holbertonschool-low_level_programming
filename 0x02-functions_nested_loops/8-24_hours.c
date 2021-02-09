#include "holberton.h"

/**
 * jack_bauer - prints the alphabet in lowercase
 *
 */

void jack_bauer(void)
{
char d = 0;
char c = 0;
char b = 0;
char a = 0;

for (a = 48; a <= 50; a++)
	for (b = 48; b <= 57; b++)
		for (c = 48; c <= 53 ; c++)
			for (d = 48; d <= 57; d++)
			{
				if (((a == 50 && b == 52) && c == 48)
				    && d == 48)
				{
					a = 51;
					b = 58;
					c = 54;
					d = 58;
					break;
				}
			_putchar(a);
			_putchar(b);
			_putchar(58);
			_putchar(c);
			_putchar(d);
			_putchar(10);
			}
}
