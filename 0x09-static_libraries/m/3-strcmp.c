#include "main.h"
/**
 * _strcmp - this is the function
 *
 * @s1: this is the parameter
 * @s2: this is another paramter
 *
 * Description: will print some srting
 *
 * Return: return value
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}

	return (s1[i] - s2[i]);

}
