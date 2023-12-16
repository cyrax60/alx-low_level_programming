#include<stdio.h>
/**
 * main - main funcitioon
 *
 * Description: will print some string
 *
 * Return: return 0
 */
int main(void)
{
	int l, a;

	for (l = 97; l <= 122; l++)
	{
		putchar(l);
	}
	for (a = 65; a <= 90; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
