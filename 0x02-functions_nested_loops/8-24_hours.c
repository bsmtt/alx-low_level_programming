#include "main.h"

/**
 * jack_bauer - check the code
 *
 * Return: Always void.
 */
void jack_bauer(void)
{
	int h,m;
	h = 0;

	while (h <= 23)
	{
		m = 0;

		while (m <= 59)
		{
			_putchar((h / 10) + 48);
			_putchar((h % 10) + 48);
			_putchar(':');
			_putchar((m / 10) + 48);
			_putchar((m % 10) + 48);
			_putchar('\n');
		}

	}

}
