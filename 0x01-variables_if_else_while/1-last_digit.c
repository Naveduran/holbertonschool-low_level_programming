#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - asign a ramdom number to the variable n
 * each time its executed.
 *
 * Return: always zero.
 */

int main(void)
{
	int n;

	int m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	m = n % 10;

	printf("Last digit of %d ", n);
	printf("is %d ", m);
	if (m == 0)
	printf("and is 0\n");
	else if (m < 6)
	printf("and is less than 6 and not 0\n");
	else if (m > 5)
	printf("and is greater than 5\n");

	return (0);
}
