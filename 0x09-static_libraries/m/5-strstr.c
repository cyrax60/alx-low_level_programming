#include "main.h"
/**
 * _strstr - function
 *
 * @haystack: parameter
 * @needle: paramter
 *
 * Description: will print some striung
 *
 * Return: return char
 */
char *_strstr(char *haystack, char *needle)
{
int iqe, jqe;

for (iqe = 0; haystack[iqe] > '\0'; iqe++)
{
	for (jqe = iqe; haystack[jqe] > '\0' && needle[jqe - iqe] > '\0'; jqe++)
	{
		if (haystack[jqe] != needle[jqe - iqe])
		{
			break;
		}
	}
	if (needle[jqe - iqe] == '\0')
	{
		return (haystack + iqe);
	}
}
return (0);
}
