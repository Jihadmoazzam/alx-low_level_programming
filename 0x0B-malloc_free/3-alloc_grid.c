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
	int i, j, k, l;
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

	for (k = 0; k < width; k++)
	{
		for (l = 0; l < height; l++)
		{
			a[k][l] = 0;
		}
	}

	return (a);
}
