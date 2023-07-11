#include <stdlib.h>

/**
 * alloc_grid - two dimentional array
 * @width: the width of array
 * @height: the height of array
 *
 * Return: a pointer to a 2 dimensional array of integers
 */
int **alloc_grid(int width, int height)
{
	int i = 0, j = 0;
	int **a;

	if (width <= 0 || height <= 0)
		return (NULL);

	a = malloc(sizeof(int *) * width);

	if (a == NULL)
	{
		free(a);
		return (NULL);
	}

	for (i = 0; i < width; i++)
	{
		a[i] = malloc(sizeof(int) * height);

		if (a[i] == NULL)
		{
			for (j = i; j >= 0; j--)
			{
				free(a[j]);
			}

			free(a);
			return (NULL);
		}
	}

	for (i = 0; i < width; i++)
	{
		for (j = 0; j < height; j++)
		{
			a[i][j] = 0;
		}
	}

	return (a);
}
