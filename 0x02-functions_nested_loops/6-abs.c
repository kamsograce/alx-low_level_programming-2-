#include "main.h"

/**
 * main - computes the absolute value of an integer.
 *
 * Return: Always 0.
 */
int _abs(int number)
{
       
	if (number >= 0)
	{
		return (number);
	}
	else
	{
		return (-1 * number);
	}
}
