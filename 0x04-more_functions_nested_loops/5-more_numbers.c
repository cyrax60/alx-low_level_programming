#include "main.h"
/**
 * more_numbers - this is the function
 *
 * Description: will print some digit
 */
void more_numbers(void)
{
	int a, b;

	for (a = 1; a <= 10; a++)
	{
		for (b = 0; b <= 14; b++)
		{
			_putchar(b + '0');
		}
		_putchar('\n');
	}
	_putchar('\n');
}
