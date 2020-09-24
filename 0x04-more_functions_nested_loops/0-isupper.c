#include "holberton.h"

/**
 * _isupper - Entry point. Checks for uppercase character
 * @c: Value to be checked
 * Return: 1 if c is uppercase. 0 if otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
		return (0);
}
