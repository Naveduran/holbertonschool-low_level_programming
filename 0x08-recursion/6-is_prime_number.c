#include "holberton.h"
/**
 * new - returns 1 if the input integer is a prime number, otherwise return 0
 * @va: number to change
 * @co: constant
 * Return: one or zero
 */
int new(int co, int va)
{
	if (co <= 1)
	{
		return (0);
	}
	if (co == va) /* no divisible = primo*/
	{
		return (1);
	}
	if (co % va == 0)  /* divisible = primo */
	{
		return (0);
	}
	return (new(co, va + 1));
}
/**
 * is_prime_number - returns 1 if the input integer is a prime number,
 * otherwise return 0
 * @n: number to evaluate
 * Return: 1 or 0.
 */
int is_prime_number(int n)
{
	return (new(n, 2));
}
