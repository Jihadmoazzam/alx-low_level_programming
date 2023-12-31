#include "main.h"

/**
 * _sqrt_recursion - get square root
 * @n: the number
 *
 * Return: square root
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - the natural square root of a number
 * @n: the number
 * @i: iterate number
 *
 * Return: the natural square root of a number
 */
int _sqrt(int n, int i)
{
	int sqrt = i * i;

	if (n < i)
		return (-1);

	if (sqrt == n)
		return (i);

	return (_sqrt(n, i + 1));
}
