#include "main.h"
/**
 * _isalpha - this is the function
 *
 * @c: this is the parameter
 *
 * Description: will check if it is alphabet or not
 *
 * Return: return 0 or 1
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
