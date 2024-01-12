#include "main.h"
/**
 * _strncat - thiss is function
 *
 * @dest: this is the parameter
 * @src: this is anogher parameter
 * @n: this is other taresin
 *
 * Description: will print some string
 *
 * Return: return string
 */
char *_strncat(char *dest, char *src, int n)
{
	int index_01 = 0;
	int index_02 = 0;

	while (dest[index_01] != '\0')
	{
		index_01++;
	}

	while (index_02 < n && src[index_02] != '\0')
	{
		dest[index_01 + index_02] = src[index_02];
		index_02++;

	}
	dest[index_01 + index_02] = '\0';

	return (dest);

}
