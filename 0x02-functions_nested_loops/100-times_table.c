#include "holberton.h"

/**
 * print_times_table with a limit of 0 to 15
 *@n: print the integer value
 * Return: nothing
 */

void print_times_table(int n)
{
	int a, b, c;
	if (n < 16 && n > -1)
	{
		for (a = 0; a <= n; a++)
	{
		for (b = 0; b <= n; b++)
	{
		c = a * b;
		if ((c / 10) == 0)
		{
			if  (b == 0)
			{
				_putchar ('0');
			}
			if (b != 0)
			{
				_putchar (' ');
				_putchar (' ');
				_putchar ((c % 10) + '0');
			}
		}

		else if ((c / 10) <= 9 && ((c % 10) <= 9))
		{
			_putchar (' ');
			_putchar ((c / 10) + '0');
			_putchar ((c % 10) + '0');
		}
		else
		{
			_putchar ((c / 100) + '0');
			_putchar (((c / 10) % 10)  + '0');
			_putchar ((c % 10) + '0');
		}
		if (b < n)
		{
			_putchar(',');
			_putchar (' ');
		}
	}	_putchar ('\n');
	}
	}
}
