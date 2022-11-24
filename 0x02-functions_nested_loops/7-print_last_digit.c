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

	if (last_digit < 0)
	{
		last_digit *= -1;
	}
	
		_putchar(last_digit + 48);
		return (last_digit);
}
