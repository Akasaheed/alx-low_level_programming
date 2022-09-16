#include "main.h"

/**
 * print_triangle - prints triangle
 *
 * @size: size of triangle
 */
void print_triangle(int size)
{
	int i;
	int j;
	int spaces;

	for (i = 0; i < size; i++)
	{
		for (spaces = size - 1 - i; spaces > 0; spaces--)
		{
			_putchar(' ');
		}
		_putchar('\n');
	}
	if (size <= 0)
	{
		_putchar('\n');
	}
}
