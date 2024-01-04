#include "main.h"
/**
 * string_toupper - this is the function
 *
 * @s: this is parameter s
 *
 * Return: return a pointer
 */
char *string_toupper(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] -= 32;
		i++;
	}
	s[i] = '\0';

	return (s);

}
