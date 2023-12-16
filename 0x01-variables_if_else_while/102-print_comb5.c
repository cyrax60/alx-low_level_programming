#include<stdio.h>
/**
 * main - main function
 *
 * Description: will print some numbers
 *
 * Return: return 0
 */
int main(void)
{
	int a, b, c, d;

	for (a = 0; a <= 9; a++)
	{
		for (b = a + 1; b <= 8; b++)
		{
			for (c = b + 1; c <= 9; c++)
			{
				for (d = c + 1; d <= 9; d++)
				{
					putchar(a + '0');
					putchar(b + '0');
					putchar(' ');
					putchar(c + '0');
					putchar(d + '0');
					if (a != 9 || b != 8 || c != 9 || d != 9)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
