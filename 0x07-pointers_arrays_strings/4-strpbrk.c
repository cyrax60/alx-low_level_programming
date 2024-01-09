#include "main.h"
/**
 * _strpbrk - this is the function
 *
 * @s: pointer
 * @accept: pointer
 *
 * Descriptoin: will print string
 *
 * Return: return pointer
 */
char *_strpbrk(char *s, char *accept)
{
	int x, y;
	char* ptr;

	for (x = 0; s[x] != '\0'; x++)
	{
		for (y = 0; accept[y] != '\0'; y++)
		{
			if (accept[y] == s[x])
			{
				ptr = &s[x];
				return (ptr);
			}
		}
	}
}
