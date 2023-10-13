#include <stdarg.h>
#include <stdio.h>

/**
 * print_format - check the code
 * @type: type
 * @args: args
 * Return: Always void.
 */

void print_format(const char type, va_list args)
{
	char *str;
	int num;
	char ch;
	float f;

	switch (type)
	{
		case 'c';
			ch = va_arg(args, int);
			printf("%c", ch);
			break;
		case 'i':
			num = va_arg(args, int);
			printf("%d", num);
				break;
		case 'f':
			f = va_arg(args, double);
			printf("%f", f);
			break;
		case 's':
			str = va_arg(args, char *);
			if (str != NULL)
			{
				printf("%s", str);
				break;
			}
			printf("(nil)");
			break;
		default:
			i++;
			continue;
	}
}

/**
 * print_all - check the code
 * @format: type
 * Return: Always 0.
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0;

	va_start(args, format);

	while (format && format[i])
	{
		 print_format(format[i], args);

		if (format[i + 1] != '\0')
			printf(", ");
		i++;
	}
	va_end(args);
	printf("\n");
}
