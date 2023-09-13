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
		_putchar('0');

		for (m = 0; m <= 9; m++)
		{
			_putchar(',');
			_putchar(' ');

			p = m * h;
			if (p <= 9)
				_putchar(' ');
			else
				_putchar((p / 10) + 48);

			_putchar((p % 10) + 48);
		}
		putchar('\n');
	}

}
