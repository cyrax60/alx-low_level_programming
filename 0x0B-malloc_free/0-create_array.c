#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * create_array - function
 * @size: int
 * @c: char
 * Return: return char
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array = NULL;

	if (size == 0)
	{
		return (NULL);
	}
	if (size != 0)
	{
		array = (char *)malloc(size * sizeof(char));
		if (array != NULL)
		{
			for (i = 0; i < size; i++)
			{
				array[i] = c;
			}
		}
	}
	return (array);
}
