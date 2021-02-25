#include "holberton.h"
#include <stdio.h>

/**
 * lenght - 123
 * @s: 123
 * @n: 123
 * Return: 123
 */

int lenght(char *s, int n)
{
	if (*s == '\0')
		return (n);
	n = n + 1;
	return (lenght((s + 1), n));
}

/**
 * nido - 123
 * @s: 123
 * @lenght: 123
 * @n: 123
 * Return: 123
 */

int nido(char *s, int lenght, int n)
{
	if (lenght == 0)
	{
		return (1);
	}
	if (n >= lenght)
	{
		return (1);
	}
	if (*(s + n) == *(s + lenght))
	{
		lenght = lenght - 1;
		n = n + 1;
		return (nido(s, lenght, n));
	}
	else
	{
		return (0);
	}
}

/**
 * is_palindrome - 123
 * @s: 123
 * Return: 123
 */

int is_palindrome(char *s)
{
	int v;

	v = (lenght(s, 0));
	return (nido(s, v - 1, 0));
}
