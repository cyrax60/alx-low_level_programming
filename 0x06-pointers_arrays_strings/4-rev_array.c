#include "main.h"
/**
 * reverse_array - this is the function
 *
 * @a: paramter a
 * @n: paramter n
 *
 * Description: will print some string
 */
void reverse_array(int *a, int n)
{
	int temp;
	int i;

	n--;
	for (i = 0;  i < n ; i++)
	{
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
		n--;
	}

}
