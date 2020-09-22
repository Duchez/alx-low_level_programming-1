#include "holberton.h"

/**
* print_alphabet_x10 - 10 times alphabet, in lowercase with
*
* Return: Always 0 (success)
*/

void print_alphabet_x10(void)
{
	int count;
	char alphabets;

	for (count = 0; count <= 9; count++)
	{
		for (alphabets = 97; alphabets <= 122; alphabets++)
		{
			_putchar(alphabets);
		}
		_putchar('\n');
	}
}
