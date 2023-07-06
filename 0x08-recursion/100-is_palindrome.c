#include "main.h"
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

/**
 * is_palindrome - check if the string is palindrome
 * @s: string
 *
 * Return: 1 if it is palindrome 0 if not
 */
int is_palindrome(char *s)
{
	int length = strlen(s);

	if (length <= 1)
	{
		return (1);
	}

	if (*s != *(s + length -1))
	{
		return (0);
	}

	*(s + length - 1) = '\0';

	return (is_palindrome(s + 1));
}
