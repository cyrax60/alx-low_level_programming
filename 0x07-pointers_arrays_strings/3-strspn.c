#include "main.h"
/**
 * _strspn - this is the function
 *
 * @s: pointer
 * @accept: pointer
 *
 * Description: will prints int
 *
 * Return: return digit
 */
unsigned int _strspn(char *s, char *accept)
{
	int x, y;

	for (x = 0; s[x] != '\0'; x++)
	{
		for (y = 0; accept[y] != s[x]; y++)
		{
			if (accept[y] == '\0')
			{
				return (x);
			}
		}
	}
	return (x);
}
