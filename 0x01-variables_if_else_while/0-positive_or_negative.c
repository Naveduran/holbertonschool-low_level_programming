#include <stdio.h>
/**
 * main - tell positive and negative numbers
 *
 * Return: returns de zero value
 */

int main(void)
{
	int n;

	if (n < 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n > 0)
	{
		prinf("%d is negative\n", n);
	}
	else
	{
		 printf("%d is zero\n", n);
	}
	return (0);
}

