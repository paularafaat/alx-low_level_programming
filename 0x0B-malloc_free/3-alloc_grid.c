#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - nested loop to make grid
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dim. array
 */
int **alloc_grid(int width, int height)
{
	int **m;
	int p, y;

	if (width <= 0 || height <= 0)
		return (NULL);

	m = malloc(sizeof(int *) * height);

	if (m == NULL)
		return (NULL);

	for (p = 0; p < height; p++)
	{
		m[p] = malloc(sizeof(int) * width);

		if (m[p] == NULL)
		{
			for (; p >= 0; p--)
				free(m[p]);

			free(m);
			return (NULL);
		}
	}

	for (p = 0; p < height; p++)
	{
		for (y = 0; y < width; y++)
			m[p][y] = 0;
	}

	return (m);
}

