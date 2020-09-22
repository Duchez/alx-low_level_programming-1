#include "holberton.h"

/**
* print_alphabet - prints alphabet in lowercase with new line
*
*/

void print_alphabet(void)
{
	char alphabets;

	for (alphabets = 'a'; alphabets <= 'z'; alphabets++)
	{
		_putchar(alphabets);
	}
	_putchar('\n');
}

/**
* main- calls the function print_alphabet
*
* Return: ALways 0 (sucess)
*/

int main(void)

{
print_alphabet();

return (0);
}
