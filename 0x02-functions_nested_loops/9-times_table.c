#include "holberton.h"
/**
 * times_table -prints 9 by 9 Times Table
 * Return: nothing
 */

void times_table(void)
{
	int rows;
	int columns;
	int answer;

for (rows = 0; rows <= 9; rows++)
{
	for (second = 0; second <= 9; second++)
{
	answer = rows * column;
	if ((answer / 10) == 0)
{
	if (columns == 0)
{
	_putchar ('0');
}
	if (columns != 0)
{
	_putchar (' ');

	_putchar ((answer % 10) + '0');
}

	if (columns < 9)
{
	_putchar(',');
	_putchar (' ');
}

}
else
{

	_putchar ((answer / 10) + '0');
	_putchar ((answer % 10) + '0');
if (b < 9)
{
	_putchar(',');
	_putchar (' ');
}
}
}
	_putchar ('\n');
}
}
