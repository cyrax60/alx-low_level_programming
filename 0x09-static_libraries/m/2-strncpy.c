#include "main.h"
/**
 * _strncpy - this is the function
 *
 * @dest: parameter1
 * @src: parameter2
 * @n: parameter3
 *
 * Description: will print some string
 *
 * Return: return string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i_01 = 0;

	for (i_01 = 0; i_01 < n && src[i_01] != '\0'; i_01++)
		dest[i_01] = src[i_01];
	for ( ; i_01 < n ; i_01++)
		dest[i_01] = '\0';

	return (dest);

}
