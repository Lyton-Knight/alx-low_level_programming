#include <stdio.h>

/*
 * main - function prints all single digit numbers of base 10 starting from 0,
 * Return is 0 always
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');
	putchar('\n');

	return (0);
}
