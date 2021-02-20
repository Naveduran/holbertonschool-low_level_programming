#include "holberton.h"
#include <stdio.h>

/**
 * *_strcpy - opies the string pointed to by src,
 * including the terminating null byte (\0), to the buffer pointed to by dest.
 * @dest: a pointer
 * @src: a pointer
 * Return: a pointer to dest
 **/

char *_strcpy(char *dest, char *src)
{
	int counter;
/*	char toprint;*/

	for (counter = 0; *src + counter <= '\0' ; counter++)
	{
		printf("%d, ", *dest + counter);
		/*toprint = (*dest + counter);*/
		/*_putchar(toprint);*/
	}
	return (0);
}
