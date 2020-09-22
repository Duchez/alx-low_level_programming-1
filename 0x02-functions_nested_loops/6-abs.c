#include "holberton.h"

/**
 * int _abs(int) - Computes Absoulte value of an integer
 *
 * Return: Always 0 (Success)
 */

int _abs(int some_integer)
{

if (some_integer < 0)
{
	return (some_integer * (-1));
}

else if (some_integer == 0)
{
	return (0);
}

else
{
	return (some_integer);
}

}
