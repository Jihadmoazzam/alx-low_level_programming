#include "main.h"
#include <stdio.h>

/**
 * main - prints it's name
 * @argc: number of commands in command line
 * @argv: list of commands
 *
 * Return: always 0
 */
int main (int argc, char *argv[])
{
	(void) argc;
	printf("%s\n", argv[0]);

	return (0);
}
