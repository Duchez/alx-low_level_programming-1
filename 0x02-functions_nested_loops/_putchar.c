#include <unistd.h>
#include <stdio.h>

/**
 * _putchar - writes the character c to standard ouput
 * @c: The character to print on the stdout
 *
 * Return: On success 1.
 * On error, -1 is returned, and err number is set appropriately.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
