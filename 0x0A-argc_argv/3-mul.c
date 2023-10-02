#include "main.h"

/**
 * main - check the code
 * @argv: second variable
 * @argc: btyte
 * Return: 0
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	int result = atoi(argv[1]) * atoi(argv[2]);

	printf("%d\n", result);
	return (0);
}
