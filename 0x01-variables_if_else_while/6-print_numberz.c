#include<stdio.h>
/**
 * main - this is the main funciton
 *
 * Description: will print all digits
 *
 * Return: return 0
 */
int main(void)
{
	int a;

	for (a = 0; a <= 9; a++)
	{
		putchar(a + '0');
	}
	putchar('\n');
	return (0);
}

