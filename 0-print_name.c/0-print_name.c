#include <stdio.h>

/**
 * print_name - print a name in uppercase
 * @name: name of the person
 * @f: function
 *
 * Return: void.
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
