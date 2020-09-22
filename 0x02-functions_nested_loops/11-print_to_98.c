#include "holberton.h"
#include <stdio.h>

/**
 * print_to_98 - Printing natural numbers from number to 98.
 * @number: The first counter from to 98
 * Return: void returns nothing.
 */

void print_to_98(int number)
{
	if (number < 98)
	{
	for (number = number; number < 98; number++)
	printf("%d, ", number);
	printf("%d\n", 98);
	}	
	else
	{
	for (number = number; number > 98; number--)
	printf("%d, ", number);
	printf("%d\n", 98);
	}
}
