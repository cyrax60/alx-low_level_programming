#include "main.h"
/**
 * _puts - this is the function
 *
 * @str: this is the parameter
 *
 * Description: will print some string
 */
void _puts(char *str)
{
	int i = 0;

	while (i >= 0)
	{
		if (str[i] == '\0')
		{
			_putchar('\n');
			break;
		}
		else
		{
			_putchar(str[i]);
			i++;
		}
	}
}
