#include "main.h"
/**
 * print_line - this is the function
 *
 * @n: this is the parameter n
 *
 * Description: will print lines
 */
void print_line(int n)
{
	int a;

	for (a = 1; a <= n; a++)
	{
		if (n <= 0)
		{
			_putchar('\n');
		}
		else
		{
			_putchar('_');
		}
	}
}
