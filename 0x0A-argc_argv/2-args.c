#include "main.h"

/**
 * main - check the code
 * @argv: second variable
 * @argc: btyte
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
