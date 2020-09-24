# include "holberton.h"

/**
 * _isdigit - Entry point. Checks if a character is a digit
 * @c: Character to be checked.
 * Return: 1 if c is a digit, 0 if otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
		return (0);
}
