#include "main.h"

/**
 * swap_int - swaps values of two integers
 * @a: integer
 * @b: integer
 * t: number
 * Returns: 0
 */

void swap_int(int *a, int *b)
{
int t;
t = *a;
*a = *b;
*b = t;
}
