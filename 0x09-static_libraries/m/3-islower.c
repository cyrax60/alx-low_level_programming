#include "main.h"
/**
 * _islower - this is the function
 *
 * @c: the prametar c
 *
 * Description: will check if it is lowercase
 *
 * Return: return 0
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
