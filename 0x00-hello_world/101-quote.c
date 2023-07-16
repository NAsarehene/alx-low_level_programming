#include <stdio.h>
#include <unistd.h>
/**
 * main - A program to print to the standard error
 * Return: 1 (successful)
 */
int main(void)
{
	char *message = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	write(2, message, 59)
	return (1);
}
