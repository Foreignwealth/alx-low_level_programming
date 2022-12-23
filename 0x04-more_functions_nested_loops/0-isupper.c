#include "main.h"

/**
 * _isupper - Entry
 * 23rd Dec by opeyemi
 * @c: argument
 * int: data type
 * Return: 0 and 1 success
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
