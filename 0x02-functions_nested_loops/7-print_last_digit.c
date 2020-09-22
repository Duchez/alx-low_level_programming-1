#include "holberton.h"

/**
 * print_last_digit - last digit
 *
 * @n: The int to print
 * Return: Returns last digit
 */

int print_last_digit(int r)
{

	int last_digit;
	char converter = '0';


if (r < 0)
{
	last_digit = (-1 *(r % 10));
	_putchar(last_digit + converter);
	return (last_digit);
}
else
{
	last_digit = r % 10;
	_putchar(last_digit + converter);
	return (last_digit);
}

}
