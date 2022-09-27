#include <stdio.h>

/**
 * main - Prints all possible combinations of single-digit numbers.
 *
 * Return: Always 0.
 */
int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		putchar((num % 10) + '0');
		// if the number equals 9 the below statements of puttin the space and a comma are terminated
		if (num == 9)
		continue;		
		putchar(',');
		putchar(' ');
	}

	putchar('\n');

	return (0);
}
