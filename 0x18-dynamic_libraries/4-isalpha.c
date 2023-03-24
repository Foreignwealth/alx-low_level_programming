#include "main.h"

/**
 * _isalpha - Entry point
 * made by opeyemi oladoyinbo
 * @c: argument
 * int: data type
 * Return: 0 and 1 success
 */

int _isalpha(int c)
{
return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
