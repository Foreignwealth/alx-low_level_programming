#include "main.h"
/**
 * reset_to_98 - updates the value it points to
 * @n: is an integer
 * @*p - is a pointer
 * Return: 0
 */

void reset_to_98(int *n)
{

int n;
int *p = &n;
_putchar("n=%d\n", n);

*p = 98;
_putchar("n=%d\n", n);
}
