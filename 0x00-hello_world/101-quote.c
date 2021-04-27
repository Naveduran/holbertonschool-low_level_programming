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
char buf[62] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
write(2, buf, 62);

exit(1);
return (1);
}
