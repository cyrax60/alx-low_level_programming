#include "main.h"
/**
 * print_numbers - this is the function
 *
 * Description: will print some digit
 *
 * Return: return 0
 */
void print_numbers(void)
{
	int a;

	for (a = 0; a <= 9; a++)
	{
		_putchar(a + '0');
	}
	_putchar('\n');
}
