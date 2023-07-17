#include <stdio.h>

/**
 * main - A program that print alphabet in lowercase follow by new line
 *
 * return: 0 (successful Execution)
 */
int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		if (letter != 'q' && letter != 'e')
		{
			putchar(letter);
		}
		letter++;
	}
	putchar('\n');
	return (0);
}
