#include "main.h"
/**
 * print_chessboard - this is the function
 *
 * @a: pointer of array
 *
 * Description: will print some string
 */
void print_chessboard(char (*a)[8])
{
	int x, y;

	for (x = 0; x < 8; x++)
	{
		for (y = 0; y < 8; y++)
		{
			_putchar(a[x][y]);
		}
		_putchar('\n');
	}
}
