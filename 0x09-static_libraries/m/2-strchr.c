#include "main.h"
/**
 * _strchr - this is the name of the function
 *
 * @s: pointer
 * @c: character
 *
 * Description: will sourch
 *
 * Return: return pointer
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return ('\0');
}
