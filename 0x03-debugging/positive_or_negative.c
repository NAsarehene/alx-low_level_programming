#include "main.h"
/**
 * positive_or_negative - Determine if a number is negative or positive
 * @i: The number to be checked.
 * Return: 0 (Succesful execution)
 */
void positive_or_negative(int i)
{
	if (i < 0)
	{
		printf("%d is %s\n", i, "negative");
	}
	else if (i > 0)
	{
		printf("%d is %s\n", i, "positive");
	}
	else
	{
		printf("%d is %s\n", i, "zero");
	}
	return;
}
