#include "main.h"
/**
 * swap_int - swap two integer value
 * @a: first paremeter
 * @b: second paremeter
 *
 *Description: swap_int swaps the value of *a and *b
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
