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
	int mult = 0;
	char c[] = "Error";

	if (argc != 3)
	{
		printf("%s\n", c);
		return (1);
	}
	mult = atoi(argv[1]) * atoi(argv[2]);
	printf("%i\n", mult);
	return (0);
}
