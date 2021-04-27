#include <sys/types.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * main - prints exactly and that piece of art is useful" - Dora Korpar,
 * 2015-10-19, followed by a new line, to the standard error.
 * Return: zero
*/

int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 61);
	exit(1);
	return (1);
}
