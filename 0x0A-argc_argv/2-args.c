#include "main.h"
#include <stdio.h>
/**
 * main - function
 *
 * @argc: int
 * @argv: array
 *
 * Return: return 00
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
