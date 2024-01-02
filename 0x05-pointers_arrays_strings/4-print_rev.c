#include "main.h"
/**
 * print_rev - this is the function
 *
 * @s: this is the parameter
 *
 * Description: will reverse
 */
void print_rev(char *s)
{
	int counter = 0, i;

	while (s[counter] != '\0')
	{
		counter++;
	}
	for (i = counter; i >= 0; i--)
	{
		_putchar(s[counter]);
	}
	_putchar('\n');
}
