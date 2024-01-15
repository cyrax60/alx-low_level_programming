#include "main.h"
#include <stdio.h>
/**
 * main - function
 *
 * @argc: int
 * @argv: char
 *
 * Return: return 0
 */
int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%d\n", argc - 1);
	}
	return (0);
}
