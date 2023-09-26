#include "main.h"

/**
 * print_chessboard - cpy memory byte
 * @a:first variable
 * @size: size
 * Return void
 */
void print_diagsums(int *a, int size)
{
	int i = 0;
	int sum_1 = 0;
	int sum_2 = 0;

	while (i < size)
	{
		sum_1 += a[i * size + i];
		sum_2 += a[i * size + (size - 1 - i)];

		i++;
	}

	 printf("%d, %d\n", sum_1, sum_2);
}
