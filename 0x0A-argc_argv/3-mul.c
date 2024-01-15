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
	if (argc > 1)
	{
		printf("%d\n", argv[argc + 1] * argv[argc + 2]);
	}
	else
	{
		printf("Error\n");

		return (1);
	}
	return (0);
}
