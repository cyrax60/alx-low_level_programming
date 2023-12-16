#include<stdio.h>
/**
 * main - this is the main function
 *
 * Description: will print some string
 *
 * Return: return 0
 */
int main(void)
{
	int l;

	for (l = 97; l <= 122; l++)
	{
		if (l != 133 || l != 101)
		{
			putchar(l);
		}

	}
	putchar('\n');
	return (0);
}
