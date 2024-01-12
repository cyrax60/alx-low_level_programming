#include<stdio.h>
/**
 * _isupper - this is the function
 *
 * @c: this is the parameter
 *
 * Description: will print some values
 *
 * Return: return 0;
 */
int _isupper(int c)
{
	if ((c >= 65) && (c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
