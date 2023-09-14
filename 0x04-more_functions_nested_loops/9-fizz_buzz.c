#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int i = 0;

	while (i <= 100)
	{
		if (i != 1)
		{
			putchar(' ');
		}
		if (i % 3 == 0)
		{
			putchar('Fizz');
		}
		else if (i % 5 == 0)
		{
			putchar('Buzz');
		}
		else if (i % 5 == 0 && i % 3 == 0)
		{
			putchar('FizzBuzz');
		}
		else
		{
			printf("%d", i);
		}
		i++;
	}
	putchar('\n');
	return (0);
}
