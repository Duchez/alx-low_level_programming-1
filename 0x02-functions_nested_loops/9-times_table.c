#include "holberton.h"

/**
 * times_table - Prints the 9 times table starting with 0.
 * The table's width is 9 by 9 (9x9)
 */

void times_table(void)
{
	int rows = 0;
	int columns;
	int answer;

	while (fields < 10)
	{
		colunms = 0;
		while (columns < 10)
		{
			answer = (rows * column);
			if (answer >= 10)
			{
				_putchar((answer / 10) + '0');
				_putchar((answer % 10) + '0');
				if (columns != 9)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			else if (answer < 10)
			{
				_putchar((answer % 10) + '0');
				if (columns != 9 && (rows * (columns + 1)) > 9)
				{
					_putchar(',');
					_putchar(' ');
				}
				else if (columns != 9 && (rows * (columns + 1)) < 10)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
			}
			columns++;
		}
		rows++;
		_putchar('\n');
	}
}
