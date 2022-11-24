#include "main.h"

/**
 * 6-print_line - draws a straight line in the terminal.
 *
 * Return: Always 0.
 */
void print_line(int n)
{
	for (; n > 0; n--)
	{
		_putchar(95);
	}
	_putchar(10);
}
