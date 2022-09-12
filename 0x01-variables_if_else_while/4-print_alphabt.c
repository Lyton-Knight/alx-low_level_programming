#include <stdio.h>
/*
 * main - pints the alphabet in lowercase, except for q and e.
 * Return is 0 always
*/

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter != 'e' && letter != 'q')
			putchar(letter);
	}

	putchar('\n');

	return (0);
}
