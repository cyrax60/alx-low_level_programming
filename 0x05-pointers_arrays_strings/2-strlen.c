#include "main.h"
/**
 * _strlen - this is the function
 *
 * @s: this is the parameter
 *
 * Description: will return the length of string
 *
 * Return: return length
 */
int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
	}
	return (i);
}
