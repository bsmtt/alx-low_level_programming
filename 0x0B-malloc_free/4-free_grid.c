#include "main.h"
#include <stdlib.h>

/**
 * free_grid - checks if a character is lowercase
 * @grid: the string
 * height: heght
 * Return: char
 */
void free_grid(int **grid, int height)
{
	for (int i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}
