#include "main.h"

/**
 * print_chessboard - cpy memory byte
 * @a:first variable
 * Return void
 */
void print_chessboard(char (*a)[8])
{
	int i = 0;

	while (i < 8)
	{
		int j = 0;

		while (j < 8)
		{
			printf("%c", a[i][j]);
			j++;
		}
		printf("\n");
		i++;
	}
}
