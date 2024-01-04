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
	int count1 = 0;

	for (count1 = 0; count1 < n && src[count1] != "\0"; count1++)
	{
		dest[count1] = src[count1];
	}
	dest[count1] = "\0";
	return(dest);
}
