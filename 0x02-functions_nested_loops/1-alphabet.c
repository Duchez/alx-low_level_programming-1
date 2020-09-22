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


}

/**
* main- calls the function print_alphabet
*
* Return: ALways 0 (sucess)
*/

int main(void)

{
print_alphabet();
_putchar('\n');
return (0);
}
