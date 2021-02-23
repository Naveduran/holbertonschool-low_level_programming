#include "holberton.h"
#include <stdio.h>
/**
 * print_diagsums - a function that prints the sum of the two diagonals of a
 * square matrix of integers.
 * @a: pointer
 * @size: int
 */

void print_diagsums(int *a, int size)
{
	int column, row, diag1, diag2;

/*1. diagonal de derecha a izquierda*/
	row = 0;
	column = 0;
	while (row < size)
	{
		diag2 = diag2 + a[row][column];
		row++;
		column++;
	}
	printf("%d\n", diag2);
/*2. diagonal de izquierda a derecha*/
	row = 0;
	column = size - 1;
	while (row < size)
	{
		diag1 = diag1 + a[row][column];
		row++;
		column--;
	}
	printf("%d, ", diag1);
}
