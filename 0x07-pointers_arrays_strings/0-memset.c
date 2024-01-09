#include "main.h"
/**
 * _memset - this is the function
 *
 * @s: pointer
 * @b: character
 * @n: int
 *
 * Description: will mem set
 *
 * Return: return pointer or array
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
