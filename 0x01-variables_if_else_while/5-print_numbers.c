#include <stdio.h>
/**
 * main - A program that prints all single digit numbers of base 10 starting from 0
 * 
 * Return: 0 (Successful Execution)
*/
int main(void)
{
	int digit;
	
	for (digit = 0; digit < 10; digit++)
	{
		putchar('0' + digit);
	}
	putchar('\n');
	return (0);   
}
