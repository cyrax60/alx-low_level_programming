#include "main.h"
/**
 * factorial - function
 *
 * @n: int
 *
 * Return: return int
 */
int factorial(int n)
{
	if (n <= 0)
	{
		return (0);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
