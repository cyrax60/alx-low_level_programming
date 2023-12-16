#include<stdio.h>
/**
 * main - this is the main function
 *
 * Description: will print alphabit ni lowercase
 *
 * Return: return 0
 */
int main(void)
{
	int a;
	for (a = 97; a <= 122; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
