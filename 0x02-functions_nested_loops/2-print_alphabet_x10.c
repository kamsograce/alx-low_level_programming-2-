#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabets in lowercase
 */
void print_alphabet_x10(void)
{
	char alphabets;
	int times = 1;

	while (times <= 10)
	{
		for (alphabets = 'a'; alphabets <= 'z'; alphabets++)
		{
			_putchar(alphabets);
		}
		times++;
		_putchar('\n');
	}
}
