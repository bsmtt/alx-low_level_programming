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
		for (m = 0; m <= 9; m++)
		{
			p = h * m;
			printf("%d", p);
			if (m < 9)
				printf(", ");

		}
		printf("\n");
	}

}
