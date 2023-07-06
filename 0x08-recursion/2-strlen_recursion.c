#include "main.h"

/**
 * _strlen_recursion - get length of string
 * @s: string
 *
 * Return: the length of string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}

	s++;
	return (_strlen_recursion(s) + 1);
}
