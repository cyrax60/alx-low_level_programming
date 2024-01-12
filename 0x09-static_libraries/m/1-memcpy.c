#include "main.h"
/**
 * _memcpy - this is the function
 *
 * @dest: array of character
 * @src: array of character
 * @n: int
 *
 * Description: will cpy array
 *
 * Return: return array
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
