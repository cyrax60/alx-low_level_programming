#include "main.h"
/**
 * print_last_digit - this is the fucntion
 *
 * @a: this is the paramter
 *
 * Description: will print some digit
 *
 * Return: return digit
 */
int print_last_digit(int a)
{
	int last;

	last = n % 10;

	if (last < 0)
	{
		last *= -1;
	}
	_putchar(last + '0');
	return (last);
}
