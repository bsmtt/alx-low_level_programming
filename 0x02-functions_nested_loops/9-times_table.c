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
			if (m < 9 && m != 0)
				printf("%2d, ", p);
			else if (m == 0)
				printf("%d, ", p);
			else
				printf("%2d", p);

		}
		printf("\n");
	}

}
