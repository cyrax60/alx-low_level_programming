#include "main.h"
/**
 * jack_bauer - this is the function
 *
 * Description: will print some digit
 */
void jack_bauer(void)
{
	int minut, hour;

	for (hour = 0; hour <= 23; hour++)
	{
		for (minut = 0; minut <= 59; minut++)
		{
			_putchar((hour / 10) + '0');
			_putchar((hour % 10) + '0');
			_putchar(':');
			_putchar((minut / 10) + '0');
			_putchar((minut % 10) + '0');
			_putchar('\n');
		}
	}
}

