#include "main.h"

/**
 * _islower - Entry point
 * made by opeyemi oladoyinbo
 * @c: argument
 * int: data type
 * Return: 0 and 1 success
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
