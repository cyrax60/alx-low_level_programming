#include "main.h"
/**
 * swap_int - this is the function
 *
 * @a: this is the parameter a
 * @b: this is the parameter b
 *
 * Descripcion: will swap two numbers
 */
void swap_int(int *a, int *b)
{
	int z;

	z = *a;
	*a = *b;
	*b = z;
}
