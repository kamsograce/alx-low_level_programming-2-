#include "main.h"

/**
 * main - prints alphabet in lowercase
 *
 * Return: Always 0.
 */
void print_alphabet(void)
{
	char alphabets;

	for (alphabets = 'a'; alphabets <= 'z'; alphabets++)
	{
		_putchar(alphabets);
	}
	_putchar('\n');
}
