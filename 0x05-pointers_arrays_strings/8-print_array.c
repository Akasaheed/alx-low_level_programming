#include <stdio.h>
#include "main.h"

/**
 * print_array - print n digit of an array
 * @a: array
 * @n:
 * numberof values
 * Return: a and n inputs
 */
void print_array(int *a, int n)
{
	int s;

	for (s = 0; s < n; s++)
	{
		if (s != n -1)
		printf("%d, ", a[s]);
		else
		printf("%d", a[s]);
	}

	printf("\n");
}
