#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - check the code
 * @separator: separtor
 * @n: count
 * Return: Always 0.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		char *str;

		str = va_arg(args, char *);
		if (str != NULL)
		{
			printf("%d", str);
		}
		else
		{
			printf("(nil)");
		}
		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(args);
	printf("\n");
}
