#include "holberton.h"

/**
 * _isalpha(int c) - Returns 1 if c is either lowercase or uppercase
 *
 * Return: Returns 0 otherwise
 */

int _isalpha(int c)

{

if ((c > 97 && c < 122) || (c > 65 && c < 90))
{
	return (1);
}

else
	return (0);

}
