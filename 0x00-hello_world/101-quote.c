#include <stdio.h>
#include <unistd.h>
/**
 * main - A program to print to the standard error
 * Return: 1 (successful)
 */
int main(void)
{
	fputs("and that piece of art is useful\" - Dora Korpar, 2015-10-19\n",stderr);
	return (1);
}
