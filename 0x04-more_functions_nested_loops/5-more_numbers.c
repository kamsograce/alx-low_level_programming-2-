#include "main.h"

/**
 * 5-more_numbers - prints 10 times the numbers, 
 * 		from 0 to 14, followed by a new line.
 *
 * Return: Always 0.
 */
void more_numbers(void)
{
	int numbers;
	int count = 1;

	while (count <= 10)
	{
		for (numbers = 0; numbers <= 14; numbers++)
		{
			if (numbers > 9)
			{
				_putchar((numbers / 10) + 48);
			}
			_putchar((numbers % 10) + 48);
		}
		count++;
		_putchar(10);
	}
}
