#include "main.h"
/**
 * _strcat - this is the function
 *
 * @dest: this is the parameter
 * @src: this is the parameter
 *
 * Description: will concatenates two strings
 *
 * Return: return string
 */
char *_strcat(char *dest, char *src)
{
	int index_01 = 0;
	int index_02 = 0;

	while (dest[index_01] != '\0')
	{
		index_01++;
	}

	while (src[index_02] != '\0')
	{
		dest[index_01 + index_02] = src[index_02];
		index_02++;

	}
	dest[index_01 + index_02] = '\0';

	return (dest);

}
