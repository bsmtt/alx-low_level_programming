#include "main.h"

/**
 * times_table - check the code
 *
 * Return: Always void.
 */
void times_table(void)
{
	int h, m, p;

	for (h = 0; h <= 9; h++)
	{
		printf("%2d", h * 0);
		for (m = 1; m <= 9; m++)
		{
			p = h * m;
			if (m < 9)
				printf(", %2d", p);
			else
				printf("%2d", p);

		}
		printf("\n");
	}

}
