#include "main.h"
/**
 * _abs - this is the function
 *
 * @i: this is the parametr
 *
 * Description: will print some digit
 *
 * Return: return 0 or 1
 */
int _abs(int i)
{
	if (i > 0)
	{
		return (i);
	}
	else if (i < 0)
	{
		return (-i);
	}
	else
	{
		return (0);
	}
}
