#include <stdio.h>

/**
 * main - Entry point for printing sum of multiples of 3 and 5 below 1024
 * Return: Always 0 (Success).
 */

int main(void)
{
	int iteration, outcome;

	iteration = 0;
	outcome = 0;

	while (iteration < 1024)
	{
		if (iteration % 3 == 0 || iteration % 5 == 0)
		result += iteration;
		iteration++;
	}

	printf("%d\n", outcome);
	return (0);
}
