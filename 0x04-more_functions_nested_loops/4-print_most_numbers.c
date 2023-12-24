#include "main.h"
/**
 * print_most_numbers - this is the function
 *
 * Description: will print some digit
 */
void print_most_numbers(void)
{
	int a;

	for (a = 0; a <= 9; a++)
	{
		if ((a == 2) || (a == 4))
		{
			continue;
		}
		else
		{
			_putchar(a + '0');
		}
	}
	_putchar('\n');
}
