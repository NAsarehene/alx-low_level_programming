#include <stdio.h>
#include <stdlib.h>
/**
 * main - A program to return alphabet
 *
 * Return: 0(successful execution)
 */
int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');
	return (0);
}
