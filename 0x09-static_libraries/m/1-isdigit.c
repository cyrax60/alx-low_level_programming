#include <stdio.h>
/**
 * _isdigit - this is the function
 *
 * @c: this is the parameter
 *
 * Descirption: will pirnt some digit
 *
 * Return: return 0
 */
int _isdigit(int c)
{
	if ((c <= '9') && (c >= '0'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
