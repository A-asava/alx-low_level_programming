#include <stdio.h>
#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number to calculate the square root of
 *
 * Return: the natural square root of n, or -1 if it doesn't exist
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);

	return (_sqrt_helper(n, 1));
}

/**
 * _sqrt_helper - recursive helper function for _sqrt_recursion
 * @n: the number to calculate the square root of
 * @i: the current guess for the square root
 *
 * Return: the natural square root of n, or -1 if it doesn't exist
 */
int _sqrt_helper(int n, int i)
{
	if (i * i == n)
		return (i);
	if (i * i > n)
		return (-1);

	return (_sqrt_helper(n, i + 1));
}

