#include "main.h"

/**
 * main - prints the last digit of a number.
 *
 * Return: value of the last digit.
 */
int print_last_digit(int number)
{
	int last_digit;

	last_digit =  number % 10;

	if (last_digit > 0)
	{
		return (last_digit);
	}
	else
	{
		return (number * -1);
	}
}
