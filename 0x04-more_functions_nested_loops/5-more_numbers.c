#include "main.h"

/**
 * more_numbers - check the code
 *
 * Return: Always void.
 */
void more_numbers(void)
{
	int i = 0;

	while (i < 10)
	{
		int n = 0;

		while (n <= 14)
		{
			int num;

			if (n < 10)
			{
				num = n;
			}
			else
			{
				num = n % 10;
				_putchar(n / 10 + '0');
			}
			 _putchar(num + '0');
			n++;
		}
		_putchar('\n');
		i++;
	}
}
