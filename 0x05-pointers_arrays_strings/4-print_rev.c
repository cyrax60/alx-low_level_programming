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
	int counter = 0;

	while (s[counter] != '\0')
	{
		counter++;
	}
	for (counter; counter >= 0; counter--)
	{
		_putchar(s[counter]);
	}
	_putchar('\n');
}
