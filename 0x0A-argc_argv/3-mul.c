#include "main.h"
#include <stdio.h>
/**
 * main - function
 *
 * @argc: int
 * @argv: array
 *
 * Return: return 1 or 0
 */
int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		printf("%d\n", argv[1] * argv[2]);
	}
	else
	{
		printf("Error\n");

		return (1);
	}
	return (0);
}
