#include "main.h"

/**
 * times_table - check the code
 *
 * Return: Always void.
 */
void times_table(void)
{
	int h, m, p;

	h = 0;

	while (h <= 9)
	{
		_putchar('0');
		m = 1;

		while (m <= 9)
		{
			_putchar(',');
			_putchar(' ');

			p = m * h;
			if (p <= 9)
				_putchar(' ');
			else
				_putchar((p / 10) + '0');

			_putchar((p % 10) + 48);
			m++;
		}
		putchar('\n');
		h++;
	}

}
