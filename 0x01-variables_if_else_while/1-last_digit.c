#include<stdio.h>
#include<stdlib.h>
#include<time.h>
/**
 * main - this is the main function
 *
 * Description: will print some string
 *
 * Return: return 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	l = n % 10
	if (l > 5)
	{
		printf("Last digit of %i is %d and is greater than 5", n, l);
	}
	else if (l < 6 && l != 0)
	{
		printf("Last digit of %i is %d and is less than 6 and not 0", n, l);
	}
	else
	{
		printf("Last digit of %d is %d and is 0", n, l);
	}
	return (1);
}
