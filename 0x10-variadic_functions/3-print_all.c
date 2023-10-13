#include <stdarg.h>
#include <stdio.h>

/**
 * print_str - check the code
 * @args: args
 * Return: Always void.
 */
void print_str(va_list args)
{
	char *str;

	str = va_arg(args, char *);
	if (str != NULL)
	{
		printf("%s", str);
		break;
	}
	printf("(nil)");
}

/**
 * print_num - check the code
 * @args: args
 * Return: Always void.
 */
void print_num(va_list args)
{
	int num;

	num = va_arg(args, int);
	printf("%d", num);
}

/**
 * print_char - check the code
 * @args: args
 * Return: Always void.
 */
void print_char(va_list args)
{
	char ch;

	ch = va_arg(args, int);
	printf("%c", ch);

}

/**
 * print_float - check the code
 * @args: args
 * Return: Always void.
 */
void print_float(va_list args)
{
	float f;

	f = va_arg(args, double);
	printf("%f", f);
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
		switch (format[i])
		{
			case 'c':
				print_char(args);
				break;
			case 'i':
				print_num(args);
				break;
			case 'f':
				 print_float(args);
				break;
			case 's':
				 print_str(args);
				break;
			default:
				i++;
				continue;
		}
		if (format[i + 1] != '\0')
		{
			printf(", ");
		}
		i++;
	}
	va_end(args);
	printf("\n");
}
