#include "holberton.h"
#include <stdio.h>

/**
 * print_to_98 - print all natural numbers from n to 98.
 * @n: Integer argument to be passed
 * Return: Returns nothing.
 */

void print_to_98(int n)
{
	if (n <= 98)
	{
		while (n <= 98)
		{
			printf("%d", n);
			if (n != 98)
			{
				putchar(',');
				putchar(' ');
			}
			n++;

		}
		putchar('\n');
	}
	else
	{
		for (; n > 98; n--)
		{
			printf("%d", n);
			if (n != 98)
			{
				putchar(',');
				putchar(' ');
			}
		}
		putchar(''\n');
	}
}
