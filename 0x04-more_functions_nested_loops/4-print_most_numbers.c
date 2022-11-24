 #include "main.h"

/**
 * 4-print_most_numbers - prints the numbers, from 0 to 9, followed by a new line.
 *
 * Reurn: Always 0.
 */
void print_most_numbers(void)
{
	int numbers;

	for (numbers = 48; numbers <= 57; numbers++)
	{
		if (numbers != 50 && numbers != 52)
		{
			_putchar(numbers);
		}
	}
	_putchar(10);
}
