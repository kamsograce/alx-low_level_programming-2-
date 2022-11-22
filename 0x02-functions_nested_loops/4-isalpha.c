#include "main.h"

/**
 * main - checks for alphabetic character.
 *
 * Return: 1 if c is a letter, lowercase or uppercase
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
