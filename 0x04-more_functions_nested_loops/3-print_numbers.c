#include "main.h"

/**
 * main - prints the numbers, from 0 to 9, followed by a new line.
 *
 * Return: Always 0.
 */
void print_numbers(void)
{
	int numbers;

	for (numbers = 48; numbers <= 57; numbers++)
	{
		_putchar(numbers);
	}
	_putchar(10);
}
