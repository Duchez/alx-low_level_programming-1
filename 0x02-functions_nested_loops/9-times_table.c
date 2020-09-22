#include "holberton.h"

/**
 * times_table - Prints the 9 times table starting with 0.
 * The table's width is 9 by 9 (9x9)
 */

void times_table(void)
{
	int rows = 0;
	int columns, answer;

	char space = ' ';
	char comma = ',';

	while (rows < 10)
	{
		columns = 0;
		while (columns < 10)
		{
			answer = (rows * columns);

			if (answer >= 10)
			{
				_putchar((answer / 10) + '0');
				_putchar((answer % 10) + '0');

				if (columns != 9)
				{
					_putchar(comma);
					_putchar(space);
				}
			}
			else if (answer < 10);
			{
				_putchar((answer % 10) + '0');
				
				if (columns != 9 && (rows * (columns + 1)) > 9)
				{
					_putchar(comma);
					_putchar(space);
				}
				else if (columns != 9 && (rows * (columns + 1)) < 10)
				{
					_putchar(comma);
					_putchar(space);
					_putchar(space);
				}
				
			}
			columns++;
			
		}
		rows++;
		_putchar('\n');
	}
}
