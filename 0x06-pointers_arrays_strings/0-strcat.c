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
	int counter1 = 0;
	int counter2 = 0;

	while (dest[counter1] != "\0")
	{
		counter1++;
	}

	while (src[counter2] != "\0")
	{
		dest[counter1 + counter2] = src[counter2];
		counter2++;
	}
	dest[counter1 + counter2] = "\0";
	return (dest);
}
