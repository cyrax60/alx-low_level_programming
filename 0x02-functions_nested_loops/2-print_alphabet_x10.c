#include "main.h"
/**
 * print_alphabet_x10 - this is the function
 *
 * Description: will print some alphabet
 *
 * Return: return 0
 */
void print_alphabet_x10(void)
{
	int a, b;

	for (a = 1; a <= 10; a++)
	{
		for (b = 97; b <= 122; b++)
		{
			_putchar(b);
		}
		_putchar('\n');
	}
}
