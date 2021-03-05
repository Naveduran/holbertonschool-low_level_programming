#include "holberton.h"

/**
 * *string_nconcat - ..
 * @s1:..
 * @s2:..
 * @n: ..
 * Return: ..
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *pointer;
	int max1, max2, maxtotal, counter;

	if (*s1 == '\0')
		return (0);
	max1 = strlen(s1);
	if (n >= strlen(s2))
		max2 = strlen(s2);
	if (n < strlen(s2))
		max2 = n;
	maxtotal = max1 + max2;
	pointer = malloc(maxtotal);
	if (pointer == NULL)
		return (NULL);
	for (counter = 0; counter <= maxtotal; counter++)
	{

		if (counter < max1)
			pointer[counter] = s1[counter];
		if (counter >= max1)
			pointer[counter] = s2[counter - max1];
		if (counter == maxtotal)
			pointer[counter] = '\0';
	}
	return (pointer);
}
