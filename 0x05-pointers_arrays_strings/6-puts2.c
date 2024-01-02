#include "main.h"
/**
 * puts2 - this is the function
 *
 * @str: this is the parameter
 *
 * Description: will print some string
 */
void puts2(char *str)
{
	int i = 0;

	while (i >= 0)
	{
		if (str[i] == '\0')
		{
			_putchar('\n');
			break;
		}
		if ((str[i] % 2) == 0)
		{
			_putchar(str[i]);
		}
		i++;
	}
}
